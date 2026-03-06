// 函数名称: sub_5a1420
// 虚拟地址: 0x5a1420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a1420(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 - 1 u<= 3)
    if (arg1 - 1 u<= 3)
        switch (arg1)
            case 1
                if (arg3 s>= 0)
                    if (arg3 s< arg2)
                        return arg3
                    
                    return arg2 - 1
            case 2
                if (arg3 s< 0)
                    if (arg3 s< arg2)
                        return neg.d(arg3)
                    
                    return arg2 - 1
                
                if (arg3 s< arg2)
                    return arg3
                
                int32_t eax_4 = arg2 * 2
                
                if (arg3 s< eax_4)
                    return eax_4 - arg3 - 1
            case 3
                if (arg3 s>= 0)
                    return mods.dp.d(sx.q(arg3), arg2)
                
                int32_t eax_12 = mods.dp.d(sx.q(neg.d(arg3)), arg2)
                
                if (eax_12 == 0)
                    return eax_12
                
                return arg2 - eax_12
    
    return 0
}
