// 函数名称: sub_611df0
// 虚拟地址: 0x611df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_611df0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ edi, int32_t* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t* ebx = arg5
    int32_t* ebx = arg5
    int32_t result
    
    while (true)
        int32_t edx = arg7
        result = arg7 - 1
        arg7 = result
        
        if (edx == 0)
            break
        
        uint32_t edx_2 = (arg4 + 3) u>> 2
        int32_t* eax_1 = ebx
        
        if (arg4 != 0)
            switch (arg4 & 3)
                case 0
                    goto label_611e2a
                case 1
                    goto label_611e22
                case 2
                    while (true)
                        *eax_1 = arg3
                        eax_1 = &eax_1[1]
                    label_611e22:
                        *eax_1 = arg3
                        eax_1 = &eax_1[1]
                        uint32_t temp0_1 = edx_2
                        edx_2 -= 1
                        
                        if (temp0_1 == 1)
                            break
                        
                    label_611e2a:
                        *eax_1 = arg3
                        eax_1 = &eax_1[1]
                    label_611e2f:
                        *eax_1 = arg3
                        eax_1 = &eax_1[1]
                case 3
                    goto label_611e2f
        
        ebx += arg6
    
    return result
}
