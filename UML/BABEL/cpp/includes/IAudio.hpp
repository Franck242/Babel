#ifndef BABEL_IAUDIO_H
#define BABEL_IAUDIO_H


namespace Babel {

class IAudio {
	public:
    virtual ~IAudio();

    virtual bool start() = 0;

    virtual bool stop() = 0;

};

} // namespace Babel
#endif
