// 函数名称: sub_689ed0
// 虚拟地址: 0x689ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_689ed0(int32_t arg1, int32_t arg2, int32_t arg3, double arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_14 = arg3
    var_14.q = fconvert.d(fconvert.t(arg4))
    
    if ((sub_5a9d8c(var_14, arg3.w) & 0x90) == 0)
        int32_t var_14_1 = arg3
        var_14_1.q = fconvert.d(fconvert.t(arg4))
        fconvert.t(arg4) - __frnd(var_14_1)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            int32_t var_10_2 = arg3
            int32_t var_14_2 = arg3
            int32_t var_c
            var_c.q = fconvert.d(fconvert.t(arg4) * fconvert.t(0.5))
            var_14_2.q = fconvert.d(fconvert.t(var_c.q))
            fconvert.t(var_c.q) - __frnd(var_14_2)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                return 1
            
            return 2
    
    return 0
}
