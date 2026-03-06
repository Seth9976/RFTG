// 函数名称: sub_5c1890
// 虚拟地址: 0x5c1890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c1890(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, void** arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    char* eax = sub_5c0ee0(&var_8, 4, 0)
    
    if (eax == 0)
        return 0xffffffff
    
    for (void** i = arg5; i != 0; i = *i)
        if ((i[1] & arg6 & 0x300) != 0)
            sub_5c1240(eax, 0, 0)
            sub_5c1070(eax, zx.d(i[2].w))
            sub_5c1070(eax, zx.d(*(i + 0xa)))
            
            if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax) == 0)
                zip_error_set(&arg4[2], 0x14, 0)
                sub_5c0c20(eax)
                return 0xffffffff
            
            if (sub_5c21e0(arg4, &var_8, 4, 0) s< 0)
                sub_5c0c20(eax)
                return 0xffffffff
            
            uint32_t eax_5 = zx.d(*(i + 0xa))
            
            if (eax_5.w != 0)
                int32_t eax_6
                int32_t edx_1
                edx_1:eax_6 = sx.q(eax_5)
                
                if (sub_5c21e0(arg4, i[3], eax_6, edx_1) s< 0)
                    sub_5c0c20(eax)
                    return 0xffffffff
    
    sub_5c0c20(eax)
    return 0
}
