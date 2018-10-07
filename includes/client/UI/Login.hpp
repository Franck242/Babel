/*
** EPITECH PROJECT, 2021
** CPP_babel_2018
** File description:
** Created by asianpw,
*/
#ifndef CPP_BABEL_2018_LOGIN_HPP
#define CPP_BABEL_2018_LOGIN_HPP

#include <QtWidgets>
#include <QPushButton>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QFormLayout>

namespace Babel {

	namespace UI {

		class Login : public QWidget {
		Q_OBJECT

		public:
			explicit Login(QStackedWidget *stack);

		private slots:
			void tryLogin();

		private:
			size_t         _width;
			size_t         _height;
			QPushButton    *_signin;
			QHBoxLayout    *_buttonLayout;
			QFormLayout    *_form;
			QVBoxLayout    *_layout;
			QLineEdit      *_id;
			QStackedWidget *_stack;
		};
	}
}

#endif //CPP_BABEL_2018_LOGIN_HPP
