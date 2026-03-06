// 函数名称: sub_641040
// 虚拟地址: 0x641040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_641040(void* arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: int32_t edx = *(arg2 + 0xc)
    int32_t edx = *(arg2 + 0xc)
    int32_t esi = 0xff - zx.d(arg7)
    
    if (arg3 == 1)
        int32_t eax_103 = *(arg2 + 8)
        arg7.d = edx
        int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        int32_t ebx_20 = temp0_3 - eax_103
        int32_t var_14_2 = ebx_20
        void* ecx_4 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_3 + *arg2) << 2)
        
        while (true)
            int32_t eax_109 = arg7.d
            arg7.d = eax_109 - 1
            
            if (eax_109 == 0)
                break
            
            int32_t eax_112
            int32_t edx_124
            edx_124:eax_112 = sx.q(eax_103 + 3)
            int32_t var_8_4 = (eax_112 + (edx_124 & 3)) s>> 2
            
            switch (eax_103 & 3)
                case 0
                    goto label_641634
                case 1
                    goto label_6415c8
                case 2
                    while (true)
                        int32_t eax_134
                        int32_t edx_173
                        edx_173:eax_134 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 1)) * esi)
                        int32_t ebx_27 = *ecx_4
                        int32_t eax_135
                        int32_t edx_177
                        edx_177:eax_135 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 2)) * esi)
                        *ecx_4 = (zx.d(arg5) + (edx_173 u>> 7)) << 8
                            | ((edx_177 u>> 7) + zx.d(arg4)) << 0x10
                            | (zx.d(ebx_27.b) * esi u/ 0xff + zx.d(arg6)) | (ebx_27 & 0xff000000)
                        ecx_4 += 4
                    label_6415c8:
                        int32_t eax_117
                        int32_t edx_128
                        edx_128:eax_117 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 1)) * esi)
                        int32_t ebx_21 = *ecx_4
                        int32_t eax_118
                        int32_t edx_132
                        edx_132:eax_118 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 2)) * esi)
                        int32_t eax_123 = var_8_4 - 1
                        *ecx_4 = (zx.d(arg5) + (edx_128 u>> 7)) << 8
                            | ((edx_132 u>> 7) + zx.d(arg4)) << 0x10
                            | (zx.d(ebx_21.b) * esi u/ 0xff + zx.d(arg6)) | (ebx_21 & 0xff000000)
                        ecx_4 += 4
                        var_8_4 = eax_123
                        
                        if (eax_123 s<= 0)
                            break
                        
                    label_641634:
                        int32_t eax_124
                        int32_t edx_143
                        edx_143:eax_124 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 1)) * esi)
                        int32_t ebx_23 = *ecx_4
                        int32_t eax_125
                        int32_t edx_147
                        edx_147:eax_125 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 2)) * esi)
                        *ecx_4 = (zx.d(arg5) + (edx_143 u>> 7)) << 8
                            | ((edx_147 u>> 7) + zx.d(arg4)) << 0x10
                            | (zx.d(ebx_23.b) * esi u/ 0xff + zx.d(arg6)) | (ebx_23 & 0xff000000)
                        ecx_4 += 4
                    label_641691:
                        int32_t eax_129
                        int32_t edx_158
                        edx_158:eax_129 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 1)) * esi)
                        int32_t ebx_25 = *ecx_4
                        int32_t eax_130
                        int32_t edx_162
                        edx_162:eax_130 = mulu.dp.d(0x80808081, zx.d(*(ecx_4 + 2)) * esi)
                        *ecx_4 = (zx.d(arg5) + (edx_158 u>> 7)) << 8
                            | ((edx_162 u>> 7) + zx.d(arg4)) << 0x10
                            | (zx.d(ebx_25.b) * esi u/ 0xff + zx.d(arg6)) | (ebx_25 & 0xff000000)
                        ecx_4 += 4
                    
                    ebx_20 = var_14_2
                case 3
                    goto label_641691
            
            ecx_4 += ebx_20 << 2
    else
        int32_t edi = *(arg2 + 8)
        
        if (arg3 == 2)
            arg7.d = edx
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            uint32_t ebx_11
            ebx_11.b = arg4
            int32_t var_10_1 = edi
            int32_t edx_79 = temp0_2 - edi
            void* ecx_3 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_2 + *arg2) << 2)
            
            while (true)
                int32_t eax_82 = arg7.d
                arg7.d = eax_82 - 1
                
                if (eax_82 == 0)
                    break
                
                int32_t eax_85
                int32_t edx_84
                edx_84:eax_85 = sx.q(edi + 3)
                arg3 = (eax_85 + (edx_84 & 3)) s>> 2
                
                switch (edi & 3)
                    case 0
                        goto label_641414
                    case 1
                        goto label_6413ab
                    case 2
                        while (true)
                            int32_t edx_110 = *ecx_3
                            uint32_t esi_13 = zx.d(*(ecx_3 + 2)) + zx.d(ebx_11.b)
                            
                            if (esi_13 u> 0xff)
                                esi_13 = 0xff
                            
                            uint32_t eax_102 = zx.d(*(ecx_3 + 1)) + zx.d(arg5)
                            
                            if (eax_102 u> 0xff)
                                eax_102 = 0xff
                            
                            uint32_t edi_33 = zx.d(edx_110.b) + zx.d(arg6)
                            
                            if (edi_33 u> 0xff)
                                edi_33 = 0xff
                            
                            ebx_11.b = arg4
                            *ecx_3 = ((edx_110 u>> 0x18 << 8 | esi_13) << 8 | eax_102) << 8 | edi_33
                            ecx_3 += 4
                        label_6413ab:
                            int32_t edx_86 = *ecx_3
                            uint32_t esi_7 = zx.d(*(ecx_3 + 2)) + zx.d(ebx_11.b)
                            
                            if (esi_7 u> 0xff)
                                esi_7 = 0xff
                            
                            uint32_t eax_91 = zx.d(*(ecx_3 + 1)) + zx.d(arg5)
                            
                            if (eax_91 u> 0xff)
                                eax_91 = 0xff
                            
                            uint32_t edi_26 = zx.d(edx_86.b) + zx.d(arg6)
                            
                            if (edi_26 u> 0xff)
                                edi_26 = 0xff
                            
                            ebx_11.b = arg4
                            int32_t eax_93 = arg3 - 1
                            *ecx_3 = ((edx_86 u>> 0x18 << 8 | esi_7) << 8 | eax_91) << 8 | edi_26
                            ecx_3 += 4
                            arg3 = eax_93
                            
                            if (eax_93 s<= 0)
                                break
                            
                        label_641414:
                            int32_t edx_94 = *ecx_3
                            uint32_t esi_9 = zx.d(*(ecx_3 + 2)) + zx.d(ebx_11.b)
                            
                            if (esi_9 u> 0xff)
                                esi_9 = 0xff
                            
                            uint32_t edi_28 = zx.d(*(ecx_3 + 1)) + zx.d(arg5)
                            uint32_t var_8_3 = edi_28
                            
                            if (edi_28 u> 0xff)
                                var_8_3 = 0xff
                            
                            uint32_t eax_98 = zx.d(edx_94.b) + zx.d(arg6)
                            
                            if (eax_98 u> 0xff)
                                eax_98 = 0xff
                            
                            *ecx_3 = ((edx_94 u>> 0x18 << 8 | esi_9) << 8 | var_8_3) << 8 | eax_98
                            ecx_3 += 4
                        label_64147f:
                            int32_t edx_102 = *ecx_3
                            uint32_t esi_11 = zx.d(*(ecx_3 + 2)) + zx.d(ebx_11.b)
                            
                            if (esi_11 u> 0xff)
                                esi_11 = 0xff
                            
                            uint32_t eax_100 = zx.d(*(ecx_3 + 1)) + zx.d(arg5)
                            
                            if (eax_100 u> 0xff)
                                eax_100 = 0xff
                            
                            uint32_t edi_31 = zx.d(edx_102.b) + zx.d(arg6)
                            
                            if (edi_31 u> 0xff)
                                edi_31 = 0xff
                            
                            ebx_11.b = arg4
                            *ecx_3 = ((edx_102 u>> 0x18 << 8 | esi_11) << 8 | eax_100) << 8 | edi_31
                            ecx_3 += 4
                        
                        edi = var_10_1
                    case 3
                        goto label_64147f
                
                ecx_3 += edx_79 << 2
        else
            uint32_t ebx = zx.d(*(*(arg1 + 4) + 9))
            int32_t eax_5 = *(arg1 + 0x10)
            
            if (arg3 == 4)
                arg7.d = edx
                int32_t temp0_1 = divs.dp.d(sx.q(eax_5), ebx)
                arg3 = edi
                int32_t ebx_2 = temp0_1 - edi
                int32_t var_8_2 = ebx_2
                void* ecx_2 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_1 + *arg2) << 2)
                
                while (true)
                    int32_t eax_47 = arg7.d
                    arg7.d = eax_47 - 1
                    
                    if (eax_47 == 0)
                        break
                    
                    int32_t eax_50
                    int32_t edx_27
                    edx_27:eax_50 = sx.q(edi + 3)
                    int32_t esi_5 = ((edx_27 & 3) + eax_50) s>> 2
                    
                    switch (edi & 3)
                        case 0
                            goto label_641239
                        case 1
                            goto label_6411d7
                        case 2
                            while (true)
                                int32_t eax_72
                                int32_t edx_67
                                edx_67:eax_72 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t ebx_9 = *ecx_2
                                int32_t eax_74
                                int32_t edx_71
                                edx_71:eax_74 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                *ecx_2 = (edx_67 u>> 7 << 8 | edx_71 u>> 7) << 8
                                    | (zx.d(ebx_9.b) * zx.d(arg6) u/ 0xff) | (ebx_9 & 0xff000000)
                                ecx_2 += 4
                            label_6411d7:
                                int32_t eax_54
                                int32_t edx_31
                                edx_31:eax_54 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t ebx_3 = *ecx_2
                                int32_t eax_56
                                int32_t edx_35
                                edx_35:eax_56 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                *ecx_2 = (edx_31 u>> 7 << 8 | edx_35 u>> 7) << 8
                                    | (zx.d(ebx_3.b) * zx.d(arg6) u/ 0xff) | (ebx_3 & 0xff000000)
                                esi_5 -= 1
                                ecx_2 += 4
                                
                                if (esi_5 s<= 0)
                                    break
                                
                            label_641239:
                                int32_t eax_60
                                int32_t edx_43
                                edx_43:eax_60 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t ebx_5 = *ecx_2
                                int32_t eax_62
                                int32_t edx_47
                                edx_47:eax_62 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                *ecx_2 = (edx_43 u>> 7 << 8 | edx_47 u>> 7) << 8
                                    | (zx.d(ebx_5.b) * zx.d(arg6) u/ 0xff) | (ebx_5 & 0xff000000)
                                ecx_2 += 4
                            label_641292:
                                int32_t eax_66
                                int32_t edx_55
                                edx_55:eax_66 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 2)) * zx.d(arg4))
                                int32_t ebx_7 = *ecx_2
                                int32_t eax_68
                                int32_t edx_59
                                edx_59:eax_68 = mulu.dp.d(0x80808081, zx.d(*(ecx_2 + 1)) * zx.d(arg5))
                                *ecx_2 = (edx_55 u>> 7 << 8 | edx_59 u>> 7) << 8
                                    | (zx.d(ebx_7.b) * zx.d(arg6) u/ 0xff) | (ebx_7 & 0xff000000)
                                ecx_2 += 4
                            
                            edi = arg3
                            ebx_2 = var_8_2
                        case 3
                            goto label_641292
                    
                    ecx_2 += ebx_2 << 2
            else
                arg3 = edx
                int32_t temp0 = divs.dp.d(sx.q(eax_5), ebx)
                ebx.b = arg6
                uint32_t* ecx_1 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0 + *arg2) << 2)
                
                while (true)
                    int32_t edx_7 = arg3
                    arg3 -= 1
                    
                    if (edx_7 == 0)
                        break
                    
                    int32_t eax_12
                    int32_t edx_8
                    edx_8:eax_12 = sx.q(edi + 3)
                    int32_t esi_3 = ((edx_8 & 3) + eax_12) s>> 2
                    
                    switch (edi & 3)
                        case 0
                            goto label_64111b
                        case 1
                            goto label_6410f3
                        case 2
                            while (true)
                                *ecx_1 = ((zx.d(arg7) << 8 | zx.d(arg4)) << 8 | zx.d(arg5)) << 8
                                    | zx.d(ebx.b)
                                ecx_1 = &ecx_1[1]
                            label_6410f3:
                                *ecx_1 = ((zx.d(arg7) << 8 | zx.d(arg4)) << 8 | zx.d(arg5)) << 8
                                    | zx.d(ebx.b)
                                esi_3 -= 1
                                ecx_1 = &ecx_1[1]
                                
                                if (esi_3 s<= 0)
                                    break
                                
                            label_64111b:
                                *ecx_1 = ((zx.d(arg7) << 8 | zx.d(arg4)) << 8 | zx.d(arg5)) << 8
                                    | zx.d(ebx.b)
                                ecx_1 = &ecx_1[1]
                            label_64113e:
                                *ecx_1 = ((zx.d(arg7) << 8 | zx.d(arg4)) << 8 | zx.d(arg5)) << 8
                                    | zx.d(ebx.b)
                                ecx_1 = &ecx_1[1]
                        case 3
                            goto label_64113e
                    
                    ecx_1 = &ecx_1[temp0 - edi]
    
    return 0
}
