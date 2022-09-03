g++ main.cpp -o app
mkdir my_outputs
for i in 1 2 3 4
do
  ./app input$i.txt ./my_outputs/output$i.txt
  diff solution$i.txt ./my_outputs/output$i.txt
done