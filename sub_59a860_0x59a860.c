// 函数名称: sub_59a860
// 虚拟地址: 0x59a860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59a860(int32_t arg1, int32_t* arg2, char* arg3 @ esi, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = *arg2
    int32_t* eax = *arg2
    int32_t i_2 = eax[1] * *eax
    char* eax_1 = arg2[3]
    int32_t ebx
    int32_t var_8 = ebx
    
    if (arg4 != 2)
        if (i_2 != 0)
            arg2.b = *arg3
            int32_t i
            
            do
                if (*eax_1 == arg2.b)
                    ebx.b = eax_1[1]
                    
                    if (ebx.b == arg3[1])
                        ebx.b = eax_1[2]
                        
                        if (ebx.b == arg3[2])
                            eax_1[3] = 0
                
                eax_1 = &eax_1[4]
                i = i_2
                i_2 -= 1
            while (i != 1)
    else if (i_2 != 0)
        arg2.b = *arg3
        int32_t i_1
        
        do
            ebx.b = *eax_1 == arg2.b
            ebx.b -= 1
            eax_1[1] = ebx.b
            eax_1 = &eax_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        return i_2 + 1
    
    return 1
}
