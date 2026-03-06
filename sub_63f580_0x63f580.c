// 函数名称: sub_63f580
// 虚拟地址: 0x63f580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63f580(void* arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: int32_t edx = *(arg2 + 0xc)
    int32_t edx = *(arg2 + 0xc)
    
    if (arg3 == 1)
        int32_t eax_137 = *(arg2 + 8)
        arg3 = edx
        int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        int32_t ebx_4 = temp0_3 - eax_137
        int32_t var_10_3 = ebx_4
        int16_t* ecx_4 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_3 + *arg2) << 1)
        
        while (true)
            int32_t edx_160 = arg3
            arg3 -= 1
            
            if (edx_160 == 0)
                break
            
            int32_t eax_146
            int32_t edx_161
            edx_161:eax_146 = sx.q(eax_137 + 3)
            int32_t var_c_10 = (eax_146 + (edx_161 & 3)) s>> 2
            
            switch (eax_137 & 3)
                case 0
                    goto label_63fd4f
                case 1
                    goto label_63fc9b
                case 2
                    while (true)
                        uint32_t edi_32 = zx.d(*ecx_4)
                        void* ebx_8 = data_8bac74
                        int32_t eax_180
                        int32_t edx_231
                        edx_231:eax_180 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_32 u>> 0xa & 0x1f) + ebx_8)) * (0xff - zx.d(arg7)))
                        int32_t eax_182
                        int32_t edx_239
                        edx_239:eax_182 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_32 u>> 5 & 0x1f) + ebx_8)) * (0xff - zx.d(arg7)))
                        int32_t eax_185
                        int32_t edx_244
                        edx_244:eax_185 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_32 & 0x1f) + ebx_8)) * (0xff - zx.d(arg7)))
                        *ecx_4 = ((((((edx_231 u>> 7).w + zx.w(arg4)) * 0x80) & 0xfc1f)
                            | (((edx_239 u>> 7).w + zx.w(arg5)) * 4)) & 0xffe0)
                            | (((edx_244 u>> 7) + zx.d(arg6)) u>> 3).w
                        ecx_4 = &ecx_4[1]
                    label_63fc9b:
                        uint32_t edi_26 = zx.d(*ecx_4)
                        void* ebx_5 = data_8bac74
                        int32_t eax_154
                        int32_t edx_165
                        edx_165:eax_154 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_26 u>> 0xa & 0x1f) + ebx_5)) * (0xff - zx.d(arg7)))
                        int32_t eax_156
                        int32_t edx_173
                        edx_173:eax_156 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_26 u>> 5 & 0x1f) + ebx_5)) * (0xff - zx.d(arg7)))
                        int32_t eax_159
                        int32_t edx_178
                        edx_178:eax_159 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_26 & 0x1f) + ebx_5)) * (0xff - zx.d(arg7)))
                        *ecx_4 = ((((((edx_165 u>> 7).w + zx.w(arg4)) * 0x80) & 0xfc1f)
                            | (((edx_173 u>> 7).w + zx.w(arg5)) * 4)) & 0xffe0)
                            | (((edx_178 u>> 7) + zx.d(arg6)) u>> 3).w
                        int32_t eax_163 = var_c_10 - 1
                        ecx_4 = &ecx_4[1]
                        var_c_10 = eax_163
                        
                        if (eax_163 s<= 0)
                            break
                        
                    label_63fd4f:
                        uint32_t edi_28 = zx.d(*ecx_4)
                        void* ebx_6 = data_8bac74
                        int32_t eax_164
                        int32_t edx_187
                        edx_187:eax_164 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_28 u>> 0xa & 0x1f) + ebx_6)) * (0xff - zx.d(arg7)))
                        int32_t eax_166
                        int32_t edx_195
                        edx_195:eax_166 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_28 u>> 5 & 0x1f) + ebx_6)) * (0xff - zx.d(arg7)))
                        int32_t eax_169
                        int32_t edx_200
                        edx_200:eax_169 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_28 & 0x1f) + ebx_6)) * (0xff - zx.d(arg7)))
                        *ecx_4 = ((((((edx_187 u>> 7).w + zx.w(arg4)) * 0x80) & 0xfc1f)
                            | (((edx_195 u>> 7).w + zx.w(arg5)) * 4)) & 0xffe0)
                            | (((edx_200 u>> 7) + zx.d(arg6)) u>> 3).w
                        ecx_4 = &ecx_4[1]
                    label_63fdf4:
                        uint32_t edi_30 = zx.d(*ecx_4)
                        void* ebx_7 = data_8bac74
                        int32_t eax_172
                        int32_t edx_209
                        edx_209:eax_172 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_30 u>> 0xa & 0x1f) + ebx_7)) * (0xff - zx.d(arg7)))
                        int32_t eax_174
                        int32_t edx_217
                        edx_217:eax_174 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_30 u>> 5 & 0x1f) + ebx_7)) * (0xff - zx.d(arg7)))
                        int32_t eax_177
                        int32_t edx_222
                        edx_222:eax_177 = mulu.dp.d(0x80808081, 
                            zx.d(*((edi_30 & 0x1f) + ebx_7)) * (0xff - zx.d(arg7)))
                        *ecx_4 = ((((((edx_209 u>> 7).w + zx.w(arg4)) * 0x80) & 0xfc1f)
                            | (((edx_217 u>> 7).w + zx.w(arg5)) * 4)) & 0xffe0)
                            | (((edx_222 u>> 7) + zx.d(arg6)) u>> 3).w
                        ecx_4 = &ecx_4[1]
                    
                    ebx_4 = var_10_3
                case 3
                    goto label_63fdf4
            
            ecx_4 = &ecx_4[ebx_4]
    else
        int32_t edi = *(arg2 + 8)
        arg7.d = edx
        
        if (arg3 == 2)
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            uint32_t ebx_1
            ebx_1.b = arg4
            int32_t var_10_2 = edi
            int32_t edx_100 = temp0_2 - edi
            int16_t* ecx_3 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_2 + *arg2) << 1)
            
            while (true)
                int32_t eax_106 = arg7.d
                arg7.d = eax_106 - 1
                
                if (eax_106 == 0)
                    break
                
                int32_t eax_109
                int32_t edx_105
                edx_105:eax_109 = sx.q(edi + 3)
                arg3 = (eax_109 + (edx_105 & 3)) s>> 2
                
                switch (edi & 3)
                    case 0
                        goto label_63fa98
                    case 1
                        goto label_63fa07
                    case 2
                        while (true)
                            uint32_t edx_143 = zx.d(*ecx_3)
                            void* edi_20 = data_8bac74
                            uint32_t edx_147 =
                                zx.d(*((edx_143 u>> 0xa & 0x1f) + edi_20)) + zx.d(ebx_1.b)
                            
                            if (edx_147 u> 0xff)
                                edx_147 = 0xff
                            
                            uint32_t eax_136 = zx.d(*((edx_143 u>> 5 & 0x1f) + edi_20)) + zx.d(arg5)
                            
                            if (eax_136 u> 0xff)
                                eax_136 = 0xff
                            
                            uint32_t esi_34 = zx.d(*((edx_143 & 0x1f) + edi_20)) + zx.d(arg6)
                            
                            if (esi_34 u> 0xff)
                                esi_34 = 0xff
                            
                            ebx_1.b = arg4
                            *ecx_3 = (((((edx_147 & 0xfff8) << 5).w | eax_136.w) & 0xfff8) * 4)
                                | (esi_34 u>> 3).w
                            ecx_3 = &ecx_3[1]
                        label_63fa07:
                            uint32_t edx_107 = zx.d(*ecx_3)
                            void* edi_9 = data_8bac74
                            uint32_t edx_111 = zx.d(*((edx_107 u>> 0xa & 0x1f) + edi_9)) + zx.d(ebx_1.b)
                            
                            if (edx_111 u> 0xff)
                                edx_111 = 0xff
                            
                            uint32_t eax_118 = zx.d(*((edx_107 u>> 5 & 0x1f) + edi_9)) + zx.d(arg5)
                            
                            if (eax_118 u> 0xff)
                                eax_118 = 0xff
                            
                            uint32_t esi_19 = zx.d(*((edx_107 & 0x1f) + edi_9)) + zx.d(arg6)
                            
                            if (esi_19 u> 0xff)
                                esi_19 = 0xff
                            
                            ebx_1.b = arg4
                            int32_t eax_120 = arg3 - 1
                            *ecx_3 = (((((edx_111 & 0xfff8) << 5).w | eax_118.w) & 0xfff8) * 4)
                                | (esi_19 u>> 3).w
                            ecx_3 = &ecx_3[1]
                            arg3 = eax_120
                            
                            if (eax_120 s<= 0)
                                break
                            
                        label_63fa98:
                            uint32_t edx_119 = zx.d(*ecx_3)
                            void* edi_13 = data_8bac74
                            uint32_t edx_123 =
                                zx.d(*((edx_119 u>> 0xa & 0x1f) + edi_13)) + zx.d(ebx_1.b)
                            
                            if (edx_123 u> 0xff)
                                edx_123 = 0xff
                            
                            uint32_t eax_125 = zx.d(*((edx_119 u>> 5 & 0x1f) + edi_13)) + zx.d(arg5)
                            int16_t var_8_2 = eax_125.w
                            
                            if (eax_125 u> 0xff)
                                var_8_2 = 0xff
                            
                            uint32_t esi_24 = zx.d(*((edx_119 & 0x1f) + edi_13)) + zx.d(arg6)
                            
                            if (esi_24 u> 0xff)
                                esi_24 = 0xff
                            
                            *ecx_3 = (((((edx_123 & 0xfff8) << 5).w | var_8_2) & 0xfff8) * 4)
                                | (esi_24 u>> 3).w
                            ecx_3 = &ecx_3[1]
                        label_63fb1d:
                            uint32_t edx_131 = zx.d(*ecx_3)
                            void* edi_16 = data_8bac74
                            uint32_t edx_135 =
                                zx.d(*((edx_131 u>> 0xa & 0x1f) + edi_16)) + zx.d(ebx_1.b)
                            
                            if (edx_135 u> 0xff)
                                edx_135 = 0xff
                            
                            uint32_t eax_131 = zx.d(*((edx_131 u>> 5 & 0x1f) + edi_16)) + zx.d(arg5)
                            
                            if (eax_131 u> 0xff)
                                eax_131 = 0xff
                            
                            uint32_t esi_29 = zx.d(*((edx_131 & 0x1f) + edi_16)) + zx.d(arg6)
                            
                            if (esi_29 u> 0xff)
                                esi_29 = 0xff
                            
                            ebx_1.b = arg4
                            *ecx_3 = (((((edx_135 & 0xfff8) << 5).w | eax_131.w) & 0xfff8) * 4)
                                | (esi_29 u>> 3).w
                            ecx_3 = &ecx_3[1]
                        
                        edi = var_10_2
                    case 3
                        goto label_63fb1d
                
                ecx_3 = &ecx_3[edx_100]
        else
            uint32_t ebx = zx.d(*(*(arg1 + 4) + 9))
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(*(arg1 + 0x10))
            
            if (arg3 == 4)
                int32_t temp0_1 = divs.dp.d(edx_1:eax_6, ebx)
                ebx.b = arg6
                int32_t var_8_1 = edi
                int32_t edx_23 = temp0_1 - edi
                int16_t* ecx_2 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_1 + *arg2) << 1)
                
                while (true)
                    int32_t eax_22 = arg7.d
                    arg7.d = eax_22 - 1
                    
                    if (eax_22 == 0)
                        break
                    
                    int32_t eax_25
                    int32_t edx_28
                    edx_28:eax_25 = sx.q(edi + 3)
                    arg3 = (eax_25 + (edx_28 & 3)) s>> 2
                    
                    switch (edi & 3)
                        case 0
                            goto label_63f7f3
                        case 1
                            goto label_63f758
                        case 2
                            while (true)
                                uint32_t esi_13 = zx.d(*ecx_2)
                                void* edi_7 = data_8bac74
                                int32_t eax_87
                                int32_t edx_83
                                edx_83:eax_87 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_13 u>> 0xa & 0x1f) + edi_7)) * zx.d(arg4))
                                int32_t eax_91
                                int32_t edx_90
                                edx_90:eax_91 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_13 u>> 5 & 0x1f) + edi_7)) * zx.d(arg5))
                                int32_t eax_97
                                int32_t edx_95
                                edx_95:eax_97 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_13 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_83 u>> 7 & 0xfff8) << 5).w | (edx_90 u>> 7).w)
                                    & 0xfff8) * 4) | (edx_95 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                            label_63f758:
                                uint32_t esi_4 = zx.d(*ecx_2)
                                void* edi_1 = data_8bac74
                                int32_t eax_34
                                int32_t edx_32
                                edx_32:eax_34 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_4 u>> 0xa & 0x1f) + edi_1)) * zx.d(arg4))
                                int32_t eax_38
                                int32_t edx_39
                                edx_39:eax_38 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_4 u>> 5 & 0x1f) + edi_1)) * zx.d(arg5))
                                int32_t eax_44
                                int32_t edx_44
                                edx_44:eax_44 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_4 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_32 u>> 7 & 0xfff8) << 5).w | (edx_39 u>> 7).w)
                                    & 0xfff8) * 4) | (edx_44 u>> 0xa).w
                                int32_t eax_48 = arg3 - 1
                                ecx_2 = &ecx_2[1]
                                arg3 = eax_48
                                
                                if (eax_48 s<= 0)
                                    break
                                
                            label_63f7f3:
                                uint32_t esi_7 = zx.d(*ecx_2)
                                void* edi_3 = data_8bac74
                                int32_t eax_53
                                int32_t edx_49
                                edx_49:eax_53 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_7 u>> 0xa & 0x1f) + edi_3)) * zx.d(arg4))
                                int32_t eax_57
                                int32_t edx_56
                                edx_56:eax_57 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_7 u>> 5 & 0x1f) + edi_3)) * zx.d(arg5))
                                int32_t eax_63
                                int32_t edx_61
                                edx_61:eax_63 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_7 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_49 u>> 7 & 0xfff8) << 5).w | (edx_56 u>> 7).w)
                                    & 0xfff8) * 4) | (edx_61 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                            label_63f87f:
                                uint32_t esi_10 = zx.d(*ecx_2)
                                void* edi_5 = data_8bac74
                                int32_t eax_70
                                int32_t edx_66
                                edx_66:eax_70 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_10 u>> 0xa & 0x1f) + edi_5)) * zx.d(arg4))
                                int32_t eax_74
                                int32_t edx_73
                                edx_73:eax_74 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_10 u>> 5 & 0x1f) + edi_5)) * zx.d(arg5))
                                int32_t eax_80
                                int32_t edx_78
                                edx_78:eax_80 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_10 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_66 u>> 7 & 0xfff8) << 5).w | (edx_73 u>> 7).w)
                                    & 0xfff8) * 4) | (edx_78 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                            
                            edi = var_8_1
                        case 3
                            goto label_63f87f
                    
                    ecx_2 = &ecx_2[edx_23]
            else
                int32_t temp0 = divs.dp.d(edx_1:eax_6, ebx)
                ebx.b = arg6
                uint16_t* ecx_1 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0 + *arg2) << 1)
                
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
                            goto label_63f670
                        case 1
                            goto label_63f631
                        case 2
                            while (true)
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfff8) * 4)
                                    | zx.w(ebx.b u>> 3)
                                ecx_1 = &ecx_1[1]
                            label_63f631:
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfff8) * 4)
                                    | zx.w(ebx.b u>> 3)
                                esi_3 -= 1
                                ecx_1 = &ecx_1[1]
                                
                                if (esi_3 s<= 0)
                                    break
                                
                            label_63f670:
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfff8) * 4)
                                    | zx.w(ebx.b u>> 3)
                                ecx_1 = &ecx_1[1]
                            label_63f6a6:
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfff8) * 4)
                                    | zx.w(ebx.b u>> 3)
                                ecx_1 = &ecx_1[1]
                        case 3
                            goto label_63f6a6
                    
                    ecx_1 = &ecx_1[temp0 - edi]
    
    return 0
}
