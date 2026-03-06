// 函数名称: sub_4b1730
// 虚拟地址: 0x4b1730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b1730(int32_t* arg1, int32_t* arg2, void* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t ebx = *(arg3 + 0xc)
    int32_t ebx = *(arg3 + 0xc)
    int32_t esi = *(arg3 + 8)
    *arg2 = 1
    int32_t eax_2
    
    if (ebx u<= 0 && (ebx u< 0 || esi u<= 0x24) && esi u<= 0x24)
        switch (esi)
            case 0, 1, 2, 3
                arg3.b = *(arg1 + 0xe)
                
                if (arg3.b != 0)
                    int32_t eax = arg1[4]
                    
                    if ((eax.b & 2) == 0 && (eax & 0x100000) == 0)
                        eax_2 = sx.d(arg3.b) - 2
                    label_4b179c:
                        int32_t eax_3
                        int32_t edx
                        edx:eax_3 = sx.q(eax_2)
                        
                        if (esi == eax_3 && ebx == edx)
                            return 1
            case 4, 5, 6, 7
                arg3.b = *(arg1 + 0xe)
                
                if (arg3.b != 0 && (arg1[4].b & 2) != 0)
                    if (arg3.b != 1)
                        eax_2 = sx.d(arg3.b) + 2
                    else
                        eax_2 = sx.d(*(arg4 + 0x1eb4)) + 2
                    
                    goto label_4b179c
            case 8, 9
                arg3.b = *(arg1 + 6)
                
                if ((arg3.b != 1 || esi != 8 || ebx != 0) && (arg3.b != 2 || esi != 9 || ebx != 0))
                    int32_t edx_1 = sx.d(*(arg1 + 0x15))
                    int32_t ecx = 0
                    
                    if (edx_1 s> 0)
                        void* eax_8 = &arg1[6]
                        
                        while (true)
                            if (*eax_8 == 1)
                                return 1
                            
                            ecx += 1
                            eax_8 += 0x18
                            
                            if (ecx s>= edx_1)
                                return 0
            case 0xa, 0xb, 0xc, 0xd
                arg3.b = *(arg1 + 6)
                
                if (arg3.b != 1)
                label_4b1847:
                    
                    if (arg3.b != 2)
                    label_4b185e:
                        int32_t ecx_1 = sx.d(*(arg1 + 0x15))
                        int32_t edi_1 = 0
                        
                        if (ecx_1 s> 0)
                            void* edx_3 = &arg1[8]
                            
                            while (true)
                                if (*(edx_3 - 8) == 4)
                                    uint32_t eax_10 = zx.d(*edx_3)
                                    
                                    if (eax_10 != 0)
                                        if (esi == 0xa && ebx == 0)
                                            break
                                        
                                        if (esi == 0xb && ebx == 0)
                                            break
                                    
                                    if (eax_10 == 0)
                                        if (esi == 0xc && ebx == 0)
                                            break
                                        
                                        if (esi == 0xd && ebx == 0)
                                            break
                                
                                edi_1 += 1
                                edx_3 += 0x18
                                
                                if (edi_1 s>= ecx_1)
                                    return 0
                            
                            return 1
                    else if ((esi != 0xb || ebx != 0) && (esi != 0xd || ebx != 0))
                        goto label_4b185e
                else if ((esi != 0xa || ebx != 0) && (esi != 0xc || ebx != 0))
                    goto label_4b1847
            case 0xe
                if (*(arg1 + 6) != 1)
                    int32_t ecx_2
                    ecx_2.b = *(arg1 + 7) == 6
                    return ecx_2
            case 0xf
                int32_t edx_4
                edx_4.b = *(arg1 + 6) == 2
                return edx_4
            case 0x10
                int32_t ecx_3
                ecx_3.b = *(arg1 + 6) == 1
                return ecx_3
            case 0x11
                if (*(arg1 + 6) == 1)
                    return not.d(arg1[4]) & 1
            case 0x12
                if (*(arg1 + 6) == 1 && (arg1[4].b & 1) == 0)
                    int32_t edi_2 = sx.d(*(arg1 + 0x15))
                    int32_t edx_5 = 0
                    
                    if (edi_2 s> 0)
                        void* ecx_5 = &arg1[6]
                        
                        do
                            if (*ecx_5 == 4 && zx.d(*(ecx_5 + 8)) != 0)
                                return 1
                            
                            edx_5 += 1
                            ecx_5 += 0x18
                        while (edx_5 s< edi_2)
            case 0x13
                return arg1[4] & 0x40
            case 0x14
                return arg1[4] & 0x100
            case 0x15
                return arg1[4] & 0x200
            case 0x16
                return arg1[4] & 0x80
            case 0x17
                return arg1[4] & 0x400
            case 0x18
                return arg1[4] & 0x800
            case 0x19
                return arg1[4] & 1
            case 0x1c
                int32_t eax_37 = arg1[4]
                
                if ((eax_37.b & 1) != 0)
                    return eax_37 & 0x40
            case 0x23
                char* eax_39 = *arg1
                void* ecx_6 = *(arg3 + 0x10)
                
                while (true)
                    arg2.b = *ecx_6
                    char temp1_1 = *eax_39
                    bool c_1 = arg2.b u< temp1_1
                    
                    if (arg2.b == temp1_1)
                        if (arg2.b == 0)
                            break
                        
                        arg2.b = *(ecx_6 + 1)
                        char temp4_1 = eax_39[1]
                        c_1 = arg2.b u< temp4_1
                        
                        if (arg2.b == temp4_1)
                            ecx_6 += 2
                            eax_39 = &eax_39[2]
                            
                            if (arg2.b == 0)
                                break
                            
                            continue
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    int32_t edx_6
                    edx_6.b = sbb.d(sbb.d(eax_39, eax_39, c_1), 0xffffffff, c_2) == 0
                    return edx_6
                
                return 1
            case 0x24
                if (arg5 != 0 && *(arg5 + 0xe) != 0)
                    *arg2 = 0
                    return 1
    return 0
}
