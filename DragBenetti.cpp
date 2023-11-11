#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Main.hpp>
#include <iostream>

using namespace std;
using namespace sf;
Texture texture;

Sprite sprite;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;

void Dibujar(RenderWindow* App)
{

	App->draw(sprite);
	App->draw(sprite2);
	App->draw(sprite3);
	App->draw(sprite4);
}
 int main(){
	 int x, y,x2,y2,x3,y3,x4,y4;
		 texture.loadFromFile("rcircle.png");

		// sprite.setScale(1.f, 1.f);
		 sprite.setTexture(texture);
		 sprite.setPosition(x=0, y=0);
		 sprite.getOrigin();
		 sprite.getPosition();
		// sprite2.setScale(1.f, 1.f);
		 sprite2.getOrigin();
		 sprite2.getPosition();
		 sprite2.setTexture(texture);
		 sprite2.setPosition(x2=680, y2=0);
		 //sprite3.setScale(1.f, 1.f);
		 sprite3.getOrigin();
		 sprite3.getPosition();
		 sprite3.setTexture(texture);
		 sprite3.setPosition(x3=0, y3=480);
		 sprite4.getOrigin();
		 sprite4.getPosition();
		// sprite4.setScale(1.f, 1.f);
		 sprite4.setTexture(texture);
		 sprite4.setPosition(x4=680,y4= 480);
		/* Vector2u size = texture.getSize();
			 sprite.setOrigin(size.x / 2.0f, size.y / 2.0f);
			 sprite2.setOrigin(size.x / 2.0f, size.y / 2.0f);
			 sprite3.setOrigin(size.x / 2.0f, size.y / 2.0f);
			 sprite4.setOrigin(size.x / 2.0f, size.y / 2.0f);*/
		 Event evt{};
		 
	 RenderWindow* App;
	 App = new RenderWindow(VideoMode(800, 600, 32),
				 "DragBenetti con base Sniper^4");
			
		 
  	enum serie{ circulo1, circulo2, circulo3, circulo4,circulo5};
	serie boton;
	boton = circulo1;
	
	
	while (App->isOpen())
	{

		while (App->pollEvent(evt)){
			

			
			
			if (evt.type==evt.Closed) {
				App->close();
			}
			
								
					Vector2i mousePosition = Mouse::getPosition(*App);

					switch (boton) {

					case circulo1:
																			
						if (evt.type == evt.MouseMoved)
						{
							sprite.setPosition(evt.mouseMove.x, evt.mouseMove.y);
						} 
							
						if (evt.type == evt.MouseButtonReleased) {
							sprite.setPosition(x, y);
							  boton = circulo2; 
							
						} break;
						
						    
						
						

					case circulo2:
						if (evt.type == evt.MouseMoved)

						{
							sprite2.setPosition(evt.mouseMove.x, evt.mouseMove.y);
						}
					
						if (evt.type == evt.MouseButtonReleased) {
							sprite2.setPosition(x2, y2);
							boton = circulo3; 
						
						}break;
						
						
					case circulo3:
																	
						if (evt.type == evt.MouseMoved) {
							sprite3.setPosition(evt.mouseMove.x, evt.mouseMove.y); 
						}

						if (evt.type == evt.MouseButtonReleased) {
							sprite3.setPosition(x3, y3);
							boton = circulo4;
						} break;
						
					case circulo4:
													
						if (evt.type == evt.MouseMoved) {
							sprite4.setPosition(evt.mouseMove.x, evt.mouseMove.y);
						}
						
							
						if (evt.type == evt.MouseButtonReleased) {
							sprite4.setPosition(x4, y4);
							boton = circulo5;
						} break;
					case circulo5:
					default: {};
						
					}


				
			
			
		}
		
			switch (boton)
			{
			
			case circulo1:
			
				App->draw(sprite);
				
				break;
				boton = circulo2;
			case circulo2:
				App->draw(sprite2);
				break;
				boton = circulo3;
			case circulo3:
				App->draw(sprite3);
				break;
				boton = circulo4;
			case circulo4:
				App->draw(sprite4);
				
				
				break;

			 
			}
			
			App->clear(Color::White);
			Dibujar(App);
			
		
			App->display();
		}

	
	return 0;
}


