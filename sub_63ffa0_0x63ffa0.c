// 函数名称: sub_63ffa0
// 虚拟地址: 0x63ffa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63ffa0(void* arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: int32_t esi = 0xff - zx.d(arg7)
    int32_t esi = 0xff - zx.d(arg7)
    
    if (arg3 == 1)
        int32_t eax_108 = *(arg2 + 8)
        arg7.d = *(arg2 + 0xc)
        int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        int32_t ebx_5 = temp0_3 - eax_108
        int32_t var_c_3 = ebx_5
        int16_t* ecx_4 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_3 + *arg2) << 1)
        
        while (true)
            int32_t eax_114 = arg7.d
            arg7.d = eax_114 - 1
            
            if (eax_114 == 0)
                break
            
            int32_t eax_117
            int32_t edx_171
            edx_171:eax_117 = sx.q(eax_108 + 3)
            int32_t var_8_3 = (eax_117 + (edx_171 & 3)) s>> 2
            
            switch (eax_108 & 3)
                case 0
                    goto label_640773
                case 1
                    goto label_6406c8
                case 2
                    while (true)
                        uint32_t edi_53 = zx.d(*ecx_4)
                        int32_t eax_154
                        int32_t edx_233
                        edx_233:eax_154 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_53 u>> 5 & 0x3f) + data_8bac70)) * esi)
                        int32_t eax_157
                        int32_t edx_239
                        edx_239:eax_157 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_53 u>> 0xb) + data_8bac74)) * esi)
                        int32_t eax_160
                        int32_t edx_243
                        edx_243:eax_160 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_53 & 0x1f) + data_8bac74)) * esi)
                        *ecx_4 = (((((edx_233 u>> 7).w + zx.w(arg5)) * 8)
                            | ((((edx_239 u>> 7).w + zx.w(arg4)) * 0x100) & 0xf81f)) & 0xffe0)
                            | (((edx_243 u>> 7) + zx.d(arg6)) u>> 3).w
                        ecx_4 = &ecx_4[1]
                    label_6406c8:
                        uint32_t edi_47 = zx.d(*ecx_4)
                        int32_t eax_125
                        int32_t edx_176
                        edx_176:eax_125 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_47 u>> 5 & 0x3f) + data_8bac70)) * esi)
                        ecx_4 = &ecx_4[1]
                        int32_t eax_128
                        int32_t edx_182
                        edx_182:eax_128 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_47 u>> 0xb) + data_8bac74)) * esi)
                        int32_t eax_131
                        int32_t edx_186
                        edx_186:eax_131 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_47 & 0x1f) + data_8bac74)) * esi)
                        int32_t eax_134 = var_8_3 - 1
                        ecx_4[-1] = (((((edx_176 u>> 7).w + zx.w(arg5)) * 8)
                            | ((((edx_182 u>> 7).w + zx.w(arg4)) * 0x100) & 0xf81f)) & 0xffe0)
                            | (((edx_186 u>> 7) + zx.d(arg6)) u>> 3).w
                        var_8_3 = eax_134
                        
                        if (eax_134 s<= 0)
                            break
                        
                    label_640773:
                        uint32_t edi_49 = zx.d(*ecx_4)
                        int32_t eax_136
                        int32_t edx_195
                        edx_195:eax_136 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_49 u>> 5 & 0x3f) + data_8bac70)) * esi)
                        int32_t eax_139
                        int32_t edx_201
                        edx_201:eax_139 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_49 u>> 0xb) + data_8bac74)) * esi)
                        int32_t eax_142
                        int32_t edx_205
                        edx_205:eax_142 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_49 & 0x1f) + data_8bac74)) * esi)
                        *ecx_4 = (((((edx_195 u>> 7).w + zx.w(arg5)) * 8)
                            | ((((edx_201 u>> 7).w + zx.w(arg4)) * 0x100) & 0xf81f)) & 0xffe0)
                            | (((edx_205 u>> 7) + zx.d(arg6)) u>> 3).w
                        ecx_4 = &ecx_4[1]
                    label_64080d:
                        uint32_t edi_51 = zx.d(*ecx_4)
                        int32_t eax_145
                        int32_t edx_214
                        edx_214:eax_145 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_51 u>> 5 & 0x3f) + data_8bac70)) * esi)
                        int32_t eax_148
                        int32_t edx_220
                        edx_220:eax_148 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_51 u>> 0xb) + data_8bac74)) * esi)
                        int32_t eax_151
                        int32_t edx_224
                        edx_224:eax_151 =
                            mulu.dp.d(0x80808081, zx.d(*((edi_51 & 0x1f) + data_8bac74)) * esi)
                        *ecx_4 = (((((edx_214 u>> 7).w + zx.w(arg5)) * 8)
                            | ((((edx_220 u>> 7).w + zx.w(arg4)) * 0x100) & 0xf81f)) & 0xffe0)
                            | (((edx_224 u>> 7) + zx.d(arg6)) u>> 3).w
                        ecx_4 = &ecx_4[1]
                    
                    ebx_5 = var_c_3
                case 3
                    goto label_64080d
            
            ecx_4 = &ecx_4[ebx_5]
    else
        int32_t edi = *(arg2 + 8)
        
        if (arg3 == 2)
            arg7.d = *(arg2 + 0xc)
            int32_t temp0_2 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            uint32_t ebx_1
            ebx_1.b = arg4
            int32_t var_c_2 = edi
            int32_t edx_109 = temp0_2 - edi
            int16_t* ecx_3 = *(arg1 + 0x14) + ((*(arg2 + 4) * temp0_2 + *arg2) << 1)
            char ebx_2 = ebx_1.b
            
            while (true)
                int32_t eax_70 = arg7.d
                arg7.d = eax_70 - 1
                
                if (eax_70 == 0)
                    break
                
                int32_t eax_73
                int32_t edx_114
                edx_114:eax_73 = sx.q(edi + 3)
                arg3 = (eax_73 + (edx_114 & 3)) s>> 2
                
                switch (edi & 3)
                    case 0
                        goto label_6404b8
                    case 1
                        goto label_640425
                    case 2
                        while (true)
                            uint32_t edx_152 = zx.d(*ecx_3)
                            void* eax_104 = data_8bac74
                            uint32_t edx_155 = zx.d(*((edx_152 u>> 0xb) + eax_104)) + zx.d(ebx_2)
                            
                            if (edx_155 u> 0xff)
                                edx_155 = 0xff
                            
                            uint32_t edi_44 = zx.d(*((edx_152 u>> 5 & 0x3f) + data_8bac70)) + zx.d(arg5)
                            
                            if (edi_44 u> 0xff)
                                edi_44 = 0xff
                            
                            uint32_t esi_34 = zx.d(*((edx_152 & 0x1f) + eax_104)) + zx.d(arg6)
                            
                            if (esi_34 u> 0xff)
                                esi_34 = 0xff
                            
                            *ecx_3 = (((((edx_155 & 0xfff8) << 5).w | edi_44.w) & 0xfffc) * 8)
                                | (esi_34 u>> 3).w
                            ecx_3 = &ecx_3[1]
                        label_640425:
                            uint32_t edx_116 = zx.d(*ecx_3)
                            void* eax_81 = data_8bac74
                            uint32_t edx_119 = zx.d(*((edx_116 u>> 0xb) + eax_81)) + zx.d(ebx_2)
                            
                            if (edx_119 u> 0xff)
                                edx_119 = 0xff
                            
                            uint32_t edi_38 = zx.d(*((edx_116 u>> 5 & 0x3f) + data_8bac70)) + zx.d(arg5)
                            
                            if (edi_38 u> 0xff)
                                edi_38 = 0xff
                            
                            uint32_t esi_16 = zx.d(*((edx_116 & 0x1f) + eax_81)) + zx.d(arg6)
                            
                            if (esi_16 u> 0xff)
                                esi_16 = 0xff
                            
                            int32_t eax_86 = arg3 - 1
                            *ecx_3 = (((((edx_119 & 0xfff8) << 5).w | edi_38.w) & 0xfffc) * 8)
                                | (esi_16 u>> 3).w
                            ecx_3 = &ecx_3[1]
                            arg3 = eax_86
                            
                            if (eax_86 s<= 0)
                                break
                            
                        label_6404b8:
                            uint32_t edx_128 = zx.d(*ecx_3)
                            void* eax_90 = data_8bac74
                            uint32_t edx_131 = zx.d(*((edx_128 u>> 0xb) + eax_90)) + zx.d(ebx_2)
                            
                            if (edx_131 u> 0xff)
                                edx_131 = 0xff
                            
                            uint32_t edi_40 = zx.d(*((edx_128 u>> 5 & 0x3f) + data_8bac70)) + zx.d(arg5)
                            
                            if (edi_40 u> 0xff)
                                edi_40 = 0xff
                            
                            uint32_t esi_22 = zx.d(*((edx_128 & 0x1f) + eax_90)) + zx.d(arg6)
                            
                            if (esi_22 u> 0xff)
                                esi_22 = 0xff
                            
                            *ecx_3 = (((((edx_131 & 0xfff8) << 5).w | edi_40.w) & 0xfffc) * 8)
                                | (esi_22 u>> 3).w
                            ecx_3 = &ecx_3[1]
                        label_64053c:
                            uint32_t edx_140 = zx.d(*ecx_3)
                            void* eax_97 = data_8bac74
                            uint32_t edx_143 = zx.d(*((edx_140 u>> 0xb) + eax_97)) + zx.d(ebx_2)
                            
                            if (edx_143 u> 0xff)
                                edx_143 = 0xff
                            
                            uint32_t edi_42 = zx.d(*((edx_140 u>> 5 & 0x3f) + data_8bac70)) + zx.d(arg5)
                            
                            if (edi_42 u> 0xff)
                                edi_42 = 0xff
                            
                            uint32_t esi_28 = zx.d(*((edx_140 & 0x1f) + eax_97)) + zx.d(arg6)
                            
                            if (esi_28 u> 0xff)
                                esi_28 = 0xff
                            
                            *ecx_3 = (((((edx_143 & 0xfff8) << 5).w | edi_42.w) & 0xfffc) * 8)
                                | (esi_28 u>> 3).w
                            ecx_3 = &ecx_3[1]
                        
                        edi = var_c_2
                    case 3
                        goto label_64053c
                
                ecx_3 = &ecx_3[edx_109]
        else
            uint32_t ebx = zx.d(*(*(arg1 + 4) + 9))
            arg7.d = *(arg2 + 0xc)
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
                            goto label_64021a
                        case 1
                            goto label_640185
                        case 2
                            while (true)
                                uint32_t esi_10 = zx.d(*ecx_2)
                                int32_t eax_59
                                int32_t edx_90
                                edx_90:eax_59 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_10 u>> 0xb) + data_8bac74)) * zx.d(arg4))
                                int32_t eax_62
                                int32_t edx_97
                                edx_97:eax_62 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_10 u>> 5 & 0x3f) + data_8bac70)) * zx.d(arg5))
                                int32_t eax_64
                                int32_t edx_102
                                edx_102:eax_64 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_10 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_90 u>> 7 & 0xfff8) << 5).w | (edx_97 u>> 7).w)
                                    & 0xfffc) * 8) | (edx_102 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                            label_640185:
                                uint32_t esi_4 = zx.d(*ecx_2)
                                int32_t eax_33
                                int32_t edx_33
                                edx_33:eax_33 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_4 u>> 0xb) + data_8bac74)) * zx.d(arg4))
                                int32_t eax_36
                                int32_t edx_40
                                edx_40:eax_36 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_4 u>> 5 & 0x3f) + data_8bac70)) * zx.d(arg5))
                                int32_t eax_38
                                int32_t edx_45
                                edx_45:eax_38 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_4 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                int32_t eax_40 = arg3 - 1
                                *ecx_2 = (((((edx_33 u>> 7 & 0xfff8) << 5).w | (edx_40 u>> 7).w)
                                    & 0xfffc) * 8) | (edx_45 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                                arg3 = eax_40
                                
                                if (eax_40 s<= 0)
                                    break
                                
                            label_64021a:
                                uint32_t esi_6 = zx.d(*ecx_2)
                                int32_t eax_43
                                int32_t edx_52
                                edx_52:eax_43 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_6 u>> 0xb) + data_8bac74)) * zx.d(arg4))
                                int32_t eax_46
                                int32_t edx_59
                                edx_59:eax_46 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_6 u>> 5 & 0x3f) + data_8bac70)) * zx.d(arg5))
                                int32_t eax_48
                                int32_t edx_64
                                edx_64:eax_48 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_6 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_52 u>> 7 & 0xfff8) << 5).w | (edx_59 u>> 7).w)
                                    & 0xfffc) * 8) | (edx_64 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                            label_64029f:
                                uint32_t esi_8 = zx.d(*ecx_2)
                                int32_t eax_51
                                int32_t edx_71
                                edx_71:eax_51 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_8 u>> 0xb) + data_8bac74)) * zx.d(arg4))
                                int32_t eax_54
                                int32_t edx_78
                                edx_78:eax_54 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_8 u>> 5 & 0x3f) + data_8bac70)) * zx.d(arg5))
                                int32_t eax_56
                                int32_t edx_83
                                edx_83:eax_56 = mulu.dp.d(0x80808081, 
                                    zx.d(*((esi_8 & 0x1f) + data_8bac74)) * zx.d(ebx.b))
                                *ecx_2 = (((((edx_71 u>> 7 & 0xfff8) << 5).w | (edx_78 u>> 7).w)
                                    & 0xfffc) * 8) | (edx_83 u>> 0xa).w
                                ecx_2 = &ecx_2[1]
                            
                            edi = var_8_1
                        case 3
                            goto label_64029f
                    
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
                            goto label_640093
                        case 1
                            goto label_640051
                        case 2
                            while (true)
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfffc) * 8)
                                    | zx.w(ebx.b u>> 3)
                                ecx_1 = &ecx_1[1]
                            label_640051:
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfffc) * 8)
                                    | zx.w(ebx.b u>> 3)
                                esi_3 -= 1
                                ecx_1 = &ecx_1[1]
                                
                                if (esi_3 s<= 0)
                                    break
                                
                            label_640093:
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfffc) * 8)
                                    | zx.w(ebx.b u>> 3)
                                ecx_1 = &ecx_1[1]
                            label_6400cc:
                                *ecx_1 = ((((zx.w(arg4) & 0xfff8) << 5 | zx.w(arg5)) & 0xfffc) * 8)
                                    | zx.w(ebx.b u>> 3)
                                ecx_1 = &ecx_1[1]
                        case 3
                            goto label_6400cc
                    
                    ecx_1 = &ecx_1[temp0 - edi]
    
    return 0
}
