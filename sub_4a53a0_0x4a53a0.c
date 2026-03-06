// 函数名称: sub_4a53a0
// 虚拟地址: 0x4a53a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a53a0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: if (arg1 != 0xffffffff)
    if (arg1 != 0xffffffff)
        sub_4a3100(arg1, arg7, arg3, arg8, arg2, arg1, arg4, arg5, arg6)
    else
        int32_t eax = sx.d(*(arg2 + 0x1e6a))
        int32_t eax_1 = eax - 1
        
        if (eax - 1 s>= 0)
            while (sx.d(*(arg2 + eax_1 + 0x1e84)) != arg3)
                int32_t temp1_1 = eax_1
                eax_1 -= 1
                
                if (temp1_1 - 1 s< 0)
                    return 1
            
            arg1 = sx.d(*(arg2 + (eax_1 << 1) + 0x1e6c))
            
            if (arg1 != 0xffffffff)
                sub_4a3100(arg1, arg7, arg3, arg8, arg2, arg1, arg4, arg5, arg6)
    
    return 1
}
