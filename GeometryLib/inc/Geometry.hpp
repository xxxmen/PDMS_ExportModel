#pragma once
#include <osg/ref_ptr>
#include <osg/Vec3>
#include <osg/Geode>

namespace Geometry
{
	osg::ref_ptr<osg::Geometry> BuildCircularTorus(const osg::Vec3 &center, const osg::Vec3 &startPnt, const osg::Vec3 &normal,
		double radius, double angle, const osg::Vec4 &color, bool topVis = true, bool bottomVis = true);
	osg::ref_ptr<osg::Geometry> BuildRectangularTorus(const osg::Vec3 &center, const osg::Vec3 &startPnt, const osg::Vec3 &normal,
		double width, double height, double angle, const osg::Vec4 &color, bool topVis = true, bool bottomVis = true);
}