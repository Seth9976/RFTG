// 函数名称: sub_5d1350
// 虚拟地址: 0x5d1350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_5d1350(void* arg1, int32_t arg2, float arg3)
{
    // 第一条实际指令: float var_8 = fconvert.s(float.t(0))
    float var_8 = fconvert.s(float.t(0))
    int32_t i = 0
    void* esi = arg1 + 4
    double var_10_2
    
    do
        float var_18_1 = fconvert.s(fconvert.t(fconvert.d(boost::math::detail::iconv<double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
            fconvert.d(fconvert.t(arg3))) * fconvert.t(*(esi - 4)))) - boost::math::detail::iconv_imp<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
            fconvert.d(fconvert.t(arg3))) * fconvert.t(*esi))
        var_10_2 = fconvert.d(boost::math::detail::iconv<double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
            fconvert.d(fconvert.t(arg3))) * fconvert.t(*esi))
        long double x87_r7_16 = fconvert.t(fconvert.s(boost::math::detail::iconv_imp<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
            fconvert.d(fconvert.t(arg3))) * fconvert.t(*(esi - 4)) + fconvert.t(var_10_2)))
            - fconvert.t(*(esi + arg2 - arg1))
        long double x87_r6_2 = fconvert.t(var_18_1) - fconvert.t(*(arg2 + (i << 3)))
        var_10_2:4.d = fconvert.s(boost::math::detail::iconv<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
            fconvert.d(x87_r7_16 * x87_r7_16 + x87_r6_2 * x87_r6_2)))
        i += 1
        esi += 8
        var_8 = fconvert.s(fconvert.t(var_10_2:4.d) + fconvert.t(var_8))
    while (i s< 0x40)
    
    var_10_2:4.d = fconvert.s(fconvert.t(var_8) * fconvert.t(0.015625))
    return fconvert.t(var_10_2:4.d)
}
