#include <iostream>

std::string fillTemplate(const std::string& values, const std::string& templateStr) {
    std::string filledTemplate = templateStr;
    size_t startPos = 0;
    size_t endPos = 0;

    while ((startPos = filledTemplate.find('[', endPos)) != std::string::npos) {
        endPos = filledTemplate.find(']', startPos);
        if (endPos == std::string::npos)
            break;

        std::string placeholder = filledTemplate.substr(startPos + 1, endPos - startPos - 1);

        size_t valueStart = values.find(placeholder + '=');
        if (valueStart != std::string::npos) {
            size_t valueEnd = values.find(',', valueStart);
            std::string value;
            if (valueEnd != std::string::npos)
                value = values.substr(valueStart + placeholder.length() + 1, valueEnd - valueStart - placeholder.length() - 1);
            else
                value = values.substr(valueStart + placeholder.length() + 1);

            filledTemplate.replace(startPos, endPos - startPos + 1, value);
            endPos = startPos + value.length();
        } else {
            ++endPos;
        }
    }

    return filledTemplate;
}

int main() {
    std::string values;
    std::getline(std::cin, values);

    std::string templateStr;
    std::getline(std::cin, templateStr);

    std::string filledTemplate = fillTemplate(values, templateStr);

    std::cout << filledTemplate << std::endl;

    return 0;
}
