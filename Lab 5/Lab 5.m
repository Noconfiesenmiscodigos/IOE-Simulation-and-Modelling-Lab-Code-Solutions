G = [15000,15500,15300,15200,14000,14500,17000,16000,15000,15500];
Y(1)=25000;
for k= 2:10
    I(k)=2+0.1*Y(k-1);
    Y(k) = 45.45+2.27*(I(k-1)+G(k-1));
    T(k)=0.2*Y(k-1);
    C(k) = 20+0.7*(Y(k-1)-T(k-1));
end
format short g
C
I
T
Y
plot(Y, 'red')
hold on
plot(C, 'blue')
hold on
plot(I, 'green')
hold on
plot(T,'black')
hold on
plot(G, 'yellow')
h = legend('National Income(Y)','Consumption(C)','Investment(I)','Taxes(T)','Expenditure(G)');
set(h,'Interpreter','none')


