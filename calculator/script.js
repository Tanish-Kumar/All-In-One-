document.addEventListener('DOMContentLoaded', () => {
    const result = document.getElementById('result');
    const buttons = document.querySelectorAll('button');
    let currentValue = '';
    let previousValue = '';
    let operation = null;

    buttons.forEach(button => {
        button.addEventListener('click', () => {
            const value = button.textContent;

            if (button.classList.contains('number')) {
                currentValue += value;
                result.value = currentValue;
            } else if (button.classList.contains('operator')) {
                if (currentValue === '') return;
                if (previousValue !== '') {
                    calculate();
                }
                operation = value;
                previousValue = currentValue;
                currentValue = '';
            } else if (button.classList.contains('function')) {
                if (currentValue === '') return;
                const num = parseFloat(currentValue);
                switch (value) {
                    case 'sin':
                        currentValue = Math.sin(num * Math.PI / 180).toString();
                        break;
                    case 'cos':
                        currentValue = Math.cos(num * Math.PI / 180).toString();
                        break;
                    case 'tan':
                        currentValue = Math.tan(num * Math.PI / 180).toString();
                        break;
                    case '√':
                        if (num < 0) {
                            alert('Cannot calculate square root of negative number!');
                            return;
                        }
                        currentValue = Math.sqrt(num).toString();
                        break;
                    case 'x²':
                        currentValue = (num * num).toString();
                        break;
                    case 'x³':
                        currentValue = (num * num * num).toString();
                        break;
                }
                result.value = currentValue;
            } else if (button.classList.contains('equals')) {
                if (currentValue === '' || previousValue === '') return;
                calculate();
                operation = null;
                previousValue = '';
                return;
            } else if (button.classList.contains('clear')) {
                currentValue = '';
                previousValue = '';
                operation = null;
                result.value = '';
            }
        });
    });

    function calculate() {
        let computation;
        const prev = parseFloat(previousValue);
        const current = parseFloat(currentValue);

        switch (operation) {
            case '+':
                computation = prev + current;
                break;
            case '-':
                computation = prev - current;
                break;
            case '×':
                computation = prev * current;
                break;
            case '÷':
                if (current === 0) {
                    alert('Cannot divide by zero!');
                    return;
                }
                computation = prev / current;
                break;
            case '%':
                computation = prev % current;
                break;
            case '±':
                computation = -current;
                break;
            default:
                return;
        }

        currentValue = computation.toString();
        result.value = currentValue;
    }
}); 