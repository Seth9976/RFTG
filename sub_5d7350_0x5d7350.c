// 函数名称: sub_5d7350
// 虚拟地址: 0x5d7350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d7350(int32_t arg1, uint32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: if (arg1 != 0 && (arg1 & 0xf0000000) != 0x10000000)
    if (arg1 != 0 && (arg1 & 0xf0000000) != 0x10000000)
        sub_5cce60("FOURCC pixel formats are not supported")
        return 0
    
    uint32_t eax_5 = zx.d(arg1.b)
    
    if (eax_5 u> 2)
        if (arg1 != 0 && (arg1 & 0xf0000000) != 0x10000000)
            if (arg1 != 0x32595559 && arg1 != 0x59565955)
                eax_5 = 1
            
            if (arg1 == 0x32595559 || arg1 == 0x59565955 || arg1 == 0x55595659)
                eax_5 = 2
        
        *arg2 = eax_5 << 3
    else
        *arg2 = zx.d((arg1 u>> 8).b)
    
    *arg6 = 0
    *arg5 = 0
    *arg4 = 0
    *arg3 = 0
    
    if (arg1 == 0x17101803)
        *arg3 = 0xff
        *arg4 = 0xff00
        *arg5 = 0xff0000
        return 1
    
    if (arg1 != 0x17401803)
        int32_t eax_12 = arg1 u>> 0x18 & 0xf
        
        if (eax_12 == 4 || eax_12 == 5 || eax_12 == 6)
            if ((arg1 u>> 0x10 & 0xf) - 1 u<= 7)
                int32_t eax_17
                int32_t ecx_8
                int32_t edx_2
                int32_t esi_1
                
                switch (arg1 u>> 0x10 & 0xf)
                    case 1
                        edx_2 = 0
                        eax_17 = 0xe0
                        ecx_8 = 0x1c
                        esi_1 = 3
                    case 2
                        edx_2 = 0xf000
                        eax_17 = 0xf00
                        ecx_8 = 0xf0
                        esi_1 = 0xf
                    case 3
                        edx_2 = 0x8000
                        eax_17 = 0x7c00
                        ecx_8 = 0x3e0
                        esi_1 = 0x1f
                    case 4
                        ecx_8 = 0x3e
                        edx_2 = 0xf800
                        eax_17 = 0x7c0
                        esi_1 = 1
                    case 5
                        edx_2 = 0
                        eax_17 = 0xf800
                        ecx_8 = 0x7e0
                        esi_1 = 0x1f
                    case 6
                        edx_2 = 0xff000000
                        eax_17 = 0xff0000
                        ecx_8 = 0xff00
                        esi_1 = 0xff
                    case 7
                        edx_2 = 0xc0000000
                        eax_17 = 0x3ff00000
                        ecx_8 = 0xffc00
                        esi_1 = 0x3ff
                    case 8
                        edx_2 = 0xffc00000
                        eax_17 = 0x3ff000
                        ecx_8 = 0xffc
                        esi_1 = 3
                
                if ((arg1 u>> 0x14 & 0xf) - 1 u<= 7)
                    switch (arg1 u>> 0x14 & 0xf)
                        case 1
                            *arg3 = eax_17
                            *arg4 = ecx_8
                            *arg5 = esi_1
                            return 1
                        case 2
                            *arg3 = edx_2
                            *arg4 = eax_17
                            *arg5 = ecx_8
                            return 1
                        case 3
                            *arg6 = edx_2
                            *arg3 = eax_17
                            *arg4 = ecx_8
                            *arg5 = esi_1
                            return 1
                        case 4
                            *arg3 = edx_2
                            *arg4 = eax_17
                            *arg5 = ecx_8
                            *arg6 = esi_1
                            return 1
                        case 5
                            goto label_5d75c9
                        case 6
                            *arg5 = edx_2
                            *arg4 = eax_17
                            *arg3 = ecx_8
                            return 1
                        case 7
                            *arg6 = edx_2
                        label_5d75c9:
                            *arg5 = eax_17
                            *arg4 = ecx_8
                            *arg3 = esi_1
                            return 1
                        case 8
                            *arg5 = edx_2
                            *arg4 = eax_17
                            *arg3 = ecx_8
                            *arg6 = esi_1
                            return 1
            
            sub_5cce60("Unknown pixel format")
            return 0
    else
        *arg3 = 0xff0000
        *arg4 = 0xff00
        *arg5 = 0xff
    
    return 1
}
