// 函数名称: sub_6409a0
// 虚拟地址: 0x6409a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6409a0(void* arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: int32_t esi = 0xff - zx.d(arg7)
    int32_t esi = 0xff - zx.d(arg7)
    
    if (arg3 == 1)
        arg7.d = *(arg2 + 8)
        arg3 = *(arg2 + 0xc)
        int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        int32_t edi_31 = temp0_3 - arg7.d
        void* ebx_2
        ebx_2.b = arg6
        int32_t var_c_2 = edi_31
        void* ecx_5 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_3 + *arg2) << 2)
        
        while (true)
            int32_t edx_117 = arg3
            arg3 -= 1
            
            if (edx_117 == 0)
                break
            
            int32_t eax_103
            int32_t edx_118
            edx_118:eax_103 = sx.q(arg7.d + 3)
            int32_t var_8_3 = (eax_103 + (edx_118 & 3)) s>> 2
            
            switch (arg7.d & 3)
                case 0
                    goto label_640efe
                case 1
                    goto label_640e9d
                case 2
                    while (true)
                        int32_t eax_125
                        int32_t edx_167
                        edx_167:eax_125 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 1)) * esi)
                        int32_t eax_126
                        int32_t edx_171
                        edx_171:eax_126 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 2)) * esi)
                        int32_t eax_128
                        int32_t edx_177
                        edx_177:eax_128 = mulu.dp.d(0x80808081, zx.d(*ecx_5) * esi)
                        *ecx_5 = (zx.d(arg5) + (edx_167 u>> 7)) << 8
                            | ((edx_171 u>> 7) + zx.d(arg4)) << 0x10
                            | ((edx_177 u>> 7) + zx.d(ebx_2.b))
                        ecx_5 += 4
                    label_640e9d:
                        int32_t eax_108
                        int32_t edx_122
                        edx_122:eax_108 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 1)) * esi)
                        int32_t eax_109
                        int32_t edx_126
                        edx_126:eax_109 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 2)) * esi)
                        int32_t eax_111
                        int32_t edx_132
                        edx_132:eax_111 = mulu.dp.d(0x80808081, zx.d(*ecx_5) * esi)
                        int32_t eax_114 = var_8_3 - 1
                        *ecx_5 = (zx.d(arg5) + (edx_122 u>> 7)) << 8
                            | ((edx_126 u>> 7) + zx.d(arg4)) << 0x10
                            | ((edx_132 u>> 7) + zx.d(ebx_2.b))
                        ecx_5 += 4
                        var_8_3 = eax_114
                        
                        if (eax_114 s<= 0)
                            break
                        
                    label_640efe:
                        int32_t eax_115
                        int32_t edx_137
                        edx_137:eax_115 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 1)) * esi)
                        int32_t eax_116
                        int32_t edx_141
                        edx_141:eax_116 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 2)) * esi)
                        int32_t eax_118
                        int32_t edx_147
                        edx_147:eax_118 = mulu.dp.d(0x80808081, zx.d(*ecx_5) * esi)
                        *ecx_5 = (zx.d(arg5) + (edx_137 u>> 7)) << 8
                            | ((edx_141 u>> 7) + zx.d(arg4)) << 0x10
                            | ((edx_147 u>> 7) + zx.d(ebx_2.b))
                        ecx_5 += 4
                    label_640f50:
                        int32_t eax_120
                        int32_t edx_152
                        edx_152:eax_120 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 1)) * esi)
                        int32_t eax_121
                        int32_t edx_156
                        edx_156:eax_121 = mulu.dp.d(0x80808081, zx.d(*(ecx_5 + 2)) * esi)
                        int32_t eax_123
                        int32_t edx_162
                        edx_162:eax_123 = mulu.dp.d(0x80808081, zx.d(*ecx_5) * esi)
                        *ecx_5 = (zx.d(arg5) + (edx_152 u>> 7)) << 8
                            | ((edx_156 u>> 7) + zx.d(arg4)) << 0x10
                            | ((edx_162 u>> 7) + zx.d(ebx_2.b))
                        ecx_5 += 4
                    
                    edi_31 = var_c_2
                case 3
                    goto label_640f50
            
            ecx_5 += edi_31 << 2
    else
        int32_t edi = *(arg2 + 8)
        
        if (arg3 == 2)
            arg7.d = *(arg2 + 0xc)
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            uint32_t ebx_1
            ebx_1.b = arg4
            int32_t var_8_2 = edi
            int32_t edx_78 = temp0_2 - edi
            void* ecx_4 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_2 + *arg2) << 2)
            
            while (true)
                int32_t eax_73 = arg7.d
                arg7.d = eax_73 - 1
                
                if (eax_73 == 0)
                    break
                
                int32_t eax_76
                int32_t edx_83
                edx_83:eax_76 = sx.q(edi + 3)
                arg3 = (eax_76 + (edx_83 & 3)) s>> 2
                
                switch (edi & 3)
                    case 0
                        goto label_640d24
                    case 1
                        goto label_640cc3
                    case 2
                        while (true)
                            uint32_t edx_106 = zx.d(*(ecx_4 + 2)) + zx.d(ebx_1.b)
                            
                            if (edx_106 u> 0xff)
                                edx_106 = 0xff
                            
                            uint32_t edi_28 = zx.d(*(ecx_4 + 1)) + zx.d(arg5)
                            
                            if (edi_28 u> 0xff)
                                edi_28 = 0xff
                            
                            uint32_t esi_13 = zx.d(*ecx_4) + zx.d(arg6)
                            
                            if (esi_13 u> 0xff)
                                esi_13 = 0xff
                            
                            *ecx_4 = (edx_106 << 8 | edi_28) << 8 | esi_13
                            ecx_4 += 4
                        label_640cc3:
                            uint32_t edx_88 = zx.d(*(ecx_4 + 2)) + zx.d(ebx_1.b)
                            
                            if (edx_88 u> 0xff)
                                edx_88 = 0xff
                            
                            uint32_t edi_22 = zx.d(*(ecx_4 + 1)) + zx.d(arg5)
                            
                            if (edi_22 u> 0xff)
                                edi_22 = 0xff
                            
                            uint32_t esi_7 = zx.d(*ecx_4) + zx.d(arg6)
                            
                            if (esi_7 u> 0xff)
                                esi_7 = 0xff
                            
                            int32_t eax_83 = arg3 - 1
                            *ecx_4 = (edx_88 << 8 | edi_22) << 8 | esi_7
                            ecx_4 += 4
                            arg3 = eax_83
                            
                            if (eax_83 s<= 0)
                                break
                            
                        label_640d24:
                            uint32_t edx_94 = zx.d(*(ecx_4 + 2)) + zx.d(ebx_1.b)
                            
                            if (edx_94 u> 0xff)
                                edx_94 = 0xff
                            
                            uint32_t edi_24 = zx.d(*(ecx_4 + 1)) + zx.d(arg5)
                            
                            if (edi_24 u> 0xff)
                                edi_24 = 0xff
                            
                            uint32_t esi_9 = zx.d(*ecx_4) + zx.d(arg6)
                            
                            if (esi_9 u> 0xff)
                                esi_9 = 0xff
                            
                            *ecx_4 = (edx_94 << 8 | edi_24) << 8 | esi_9
                            ecx_4 += 4
                        label_640d76:
                            uint32_t edx_100 = zx.d(*(ecx_4 + 2)) + zx.d(ebx_1.b)
                            
                            if (edx_100 u> 0xff)
                                edx_100 = 0xff
                            
                            uint32_t edi_26 = zx.d(*(ecx_4 + 1)) + zx.d(arg5)
                            
                            if (edi_26 u> 0xff)
                                edi_26 = 0xff
                            
                            uint32_t esi_11 = zx.d(*ecx_4) + zx.d(arg6)
                            
                            if (esi_11 u> 0xff)
                                esi_11 = 0xff
                            
                            *ecx_4 = (edx_100 << 8 | edi_26) << 8 | esi_11
                            ecx_4 += 4
                        
                        edi = var_8_2
                    case 3
                        goto label_640d76
                
                ecx_4 += edx_78 << 2
        else
            uint32_t ebx = zx.d(*(*(arg1 + 4) + 9))
            arg7.d = *(arg2 + 0xc)
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(*(arg1 + 0x10))
            
            if (arg3 == 4)
                int32_t temp0_1 = divs.dp.d(edx_1:eax_6, ebx)
                ebx.b = arg6
                arg3 = edi
                int32_t edx_19 = temp0_1 - edi
                void* ecx_2 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_1 + *arg2) << 2)
                
                while (true)
                    int32_t eax_38 = arg7.d
                    arg7.d = eax_38 - 1
                    
                    if (eax_38 == 0)
                        break
                    
                    int32_t eax_41
                    int32_t edx_24
                    edx_24:eax_41 = sx.q(edi + 3)
                    int32_t esi_5 = ((edx_24 & 3) + eax_41) s>> 2
                    
                    switch (edi & 3)
                        case 0
                            goto label_640b62
                        case 1
                            goto label_640b0b
                        case 2
                            while (true)
                                int32_t eax_63
                                int32_t edx_64
                                edx_64:eax_63 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t eax_65
                                int32_t edx_68
                                edx_68:eax_65 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                int32_t eax_67
                                int32_t edx_72
                                edx_72:eax_67 = mulu.dp.d(0x80808081, zx.d(*ecx_2) * zx.d(ebx.b))
                                *ecx_2 = (edx_64 u>> 7 << 8 | edx_68 u>> 7) << 8 | edx_72 u>> 7
                                ecx_2 += 4
                            label_640b0b:
                                int32_t eax_45
                                int32_t edx_28
                                edx_28:eax_45 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t eax_47
                                int32_t edx_32
                                edx_32:eax_47 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                int32_t eax_49
                                int32_t edx_36
                                edx_36:eax_49 = mulu.dp.d(0x80808081, zx.d(*ecx_2) * zx.d(ebx.b))
                                *ecx_2 = (edx_28 u>> 7 << 8 | edx_32 u>> 7) << 8 | edx_36 u>> 7
                                esi_5 -= 1
                                ecx_2 += 4
                                
                                if (esi_5 s<= 0)
                                    break
                                
                            label_640b62:
                                int32_t eax_51
                                int32_t edx_40
                                edx_40:eax_51 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t eax_53
                                int32_t edx_44
                                edx_44:eax_53 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                int32_t eax_55
                                int32_t edx_48
                                edx_48:eax_55 = mulu.dp.d(0x80808081, zx.d(*ecx_2) * zx.d(ebx.b))
                                *ecx_2 = (edx_40 u>> 7 << 8 | edx_44 u>> 7) << 8 | edx_48 u>> 7
                                ecx_2 += 4
                            label_640bb0:
                                int32_t eax_57
                                int32_t edx_52
                                edx_52:eax_57 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t eax_59
                                int32_t edx_56
                                edx_56:eax_59 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                int32_t eax_61
                                int32_t edx_60
                                edx_60:eax_61 = mulu.dp.d(0x80808081, zx.d(*ecx_2) * zx.d(ebx.b))
                                *ecx_2 = (edx_52 u>> 7 << 8 | edx_56 u>> 7) << 8 | edx_60 u>> 7
                                ecx_2 += 4
                            
                            edi = arg3
                        case 3
                            goto label_640bb0
                    
                    ecx_2 += edx_19 << 2
            else
                int32_t temp0 = divs.dp.d(edx_1:eax_6, ebx)
                ebx.b = arg6
                uint32_t* ecx_1 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0 + *arg2) << 2)
                
                while (true)
                    int32_t eax_9 = arg7.d
                    arg7.d = eax_9 - 1
                    
                    if (eax_9 == 0)
                        break
                    
                    int32_t eax_12
                    int32_t edx_8
                    edx_8:eax_12 = sx.q(edi + 3)
                    int32_t esi_3 = ((edx_8 & 3) + eax_12) s>> 2
                    
                    switch (edi & 3)
                        case 0
                            goto label_640a65
                        case 1
                            goto label_640a46
                        case 2
                            while (true)
                                *ecx_1 = (zx.d(arg4) << 8 | zx.d(arg5)) << 8 | zx.d(ebx.b)
                                ecx_1 = &ecx_1[1]
                            label_640a46:
                                *ecx_1 = (zx.d(arg4) << 8 | zx.d(arg5)) << 8 | zx.d(ebx.b)
                                esi_3 -= 1
                                ecx_1 = &ecx_1[1]
                                
                                if (esi_3 s<= 0)
                                    break
                                
                            label_640a65:
                                *ecx_1 = (zx.d(arg4) << 8 | zx.d(arg5)) << 8 | zx.d(ebx.b)
                                ecx_1 = &ecx_1[1]
                            label_640a7f:
                                *ecx_1 = (zx.d(arg4) << 8 | zx.d(arg5)) << 8 | zx.d(ebx.b)
                                ecx_1 = &ecx_1[1]
                        case 3
                            goto label_640a7f
                    
                    ecx_1 = &ecx_1[temp0 - edi]
    
    return 0
}
