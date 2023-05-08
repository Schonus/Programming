function saveAsExcel(HeadName, DivName) {
            var s = "<center>" + HeadName + "</center>" + "\r\n";
            s += DivName.innerHTML;
            var xlsWindow = window.open("", "_blank", "width=1,height=1,scrollbars=no,toolbar=no");
            xlsWindow.document.write(s);
            xlsWindow.document.close();
            xlsWindow.document.execCommand('Saveas', true, '%homeDrive%\\Data.xls')
            xlsWindow.close();
        }