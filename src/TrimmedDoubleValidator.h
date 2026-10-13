#include <QDoubleValidator>

class TrimmedDoubleValidator : public QDoubleValidator {
public:
    using QDoubleValidator::QDoubleValidator;

    QValidator::State validate(QString &input, int &pos) const override {
        input = input.trimmed();
        return QDoubleValidator::validate(input, pos);
    }
};

