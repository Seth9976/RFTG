// 函数名称: sub_56ab70
// 虚拟地址: 0x56ab70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_56ab70()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698e6c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char var_2cc
    int32_t eax_2 = __security_cookie ^ &var_2cc
    int32_t __saved_edi
    int32_t var_2dc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = data_3079208
    
    if (result != 0)
        if (result[1] != 0x20)
            data_27e8020 = 0xff000000
            float var_2a0
            float var_260
            __builtin_memcpy(&var_260, sub_56a660(&var_2a0), 0x38)
            float nVirtKey = sub_4ddf40(&var_260)
            nVirtKey = fconvert.s(fconvert.t(0.699999988f))
            sub_4dda80(nVirtKey)
            nVirtKey = 1.39989717e-42f
            sub_4dda30(nVirtKey)
            
            if (data_3079214 == 2)
                sub_4db310()
            
            if (*(data_3079208 + 4) == 0x1e)
                sub_575e20()
            
            if (*(data_3079208 + 4) == 0x1d)
                sub_5838b0()
                unimplemented  {call 0x5838b0}
            
            if (*(data_3079208 + 4) == 0x22)
                sub_52d9a0()
                unimplemented  {call 0x52d9a0}
            
            int32_t* eax_11 = data_3078824
            unimplemented  {fldz }
            float var_298
            
            if (eax_11 == 0 || data_3079214 == 1)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                
                if (data_3078828 == 0 || data_3079214 != 1)
                    var_2cc = 0xc0
                    int16_t var_2cb_1 = 0xc0c0
                    char var_2c9_1 = 0xff
                    data_27e8020 = var_2cc.d
                else
                    if ((data_316686c & 1) == 0)
                        data_316686c.d |= 1
                        int32_t var_c_1 = 0
                        data_3166868 = sub_509140(5, "sys/skybox.material")
                        int32_t var_c_2 = 0xffffffff
                    
                    if ((data_316686c & 2) == 0)
                        data_316686c.d |= 2
                        int32_t var_c_3 = 1
                        data_3166864 = sub_509140(2, "sys/skybox.structure")
                        int32_t var_c_4 = 0xffffffff
                    
                    unimplemented  {fld st0, dword [0x8a53c0]}
                    var_2a0 = fconvert.s(unimplemented  {fstp dword [esp+0x3c], st0})
                    unimplemented  {fstp dword [esp+0x3c], st0}
                    int32_t var_29c_1 = 0
                    var_298 = 0f
                    int32_t var_294_1 = 0
                    int32_t eax_9 = data_3079238
                    int32_t var_290_1 = 0x3f800000
                    int32_t ecx_4 = data_307923c
                    int32_t var_28c_1 = data_3079234
                    float edx_3 = data_3078828
                    nVirtKey = 0f
                    int32_t var_288_1 = eax_9
                    int32_t var_284_1 = ecx_4
                    sub_4e0710(data_3166864, data_3166868, edx_3, nVirtKey)
            else
                nVirtKey = fconvert.s(unimplemented  {fst dword [esp+0x4], st0})
                float var_2e4_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4d9da0(eax_11, var_2e4_1, nVirtKey)
                unimplemented  {call 0x4d9da0}
            
            nVirtKey = 1.40269976e-42f
            sub_4dda30(nVirtKey)
            float var_2c0
            
            if (data_3079214 == 1 && *(data_3079210 + 0x84) != 0)
                if ((data_316686c & 4) == 0)
                    data_316686c.d |= 4
                    int32_t var_c_5 = 2
                    data_3166860 = sub_509140(5, "sys/particle_3d.material")
                    int32_t var_c_6 = 0xffffffff
                
                if ((data_316686c & 8) == 0)
                    data_316686c.d |= 8
                    int32_t var_c_7 = 3
                    data_316685c = sub_509140(3, "sys/holodeck.texture")
                    int32_t var_c_8 = 0xffffffff
                
                unimplemented  {fld st0, dword [0x8a55f4]}
                var_260 = fconvert.s(unimplemented  {fst dword [esp+0x7c], st0})
                float var_25c_1 = fconvert.s(unimplemented  {fst dword [esp+0x80], st0})
                unimplemented  {fldz }
                var_298 = 0f
                float var_258_1 = fconvert.s(unimplemented  {fst dword [esp+0x84], st0})
                unimplemented  {fld1 }
                int32_t var_29c_2 = 0
                float var_254_1 = fconvert.s(unimplemented  {fst dword [esp+0x88], st0})
                float var_244_1 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
                int32_t var_28c_2 = 0
                float var_23c_1 = fconvert.s(unimplemented  {fst dword [esp+0xa0], st0})
                int32_t var_294_2 = 0
                float var_238_1 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
                float var_2bc_1 = fconvert.s(unimplemented  {fst dword [esp+0x20], st0})
                int32_t var_290_2 = 0x3f800000
                float var_2b8_1 = fconvert.s(unimplemented  {fst dword [esp+0x24], st0})
                float var_2b4_1 = fconvert.s(unimplemented  {fst dword [esp+0x28], st0})
                nVirtKey = 5.60519386e-45f
                float var_2a8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
                unimplemented  {fstp dword [esp+0x38], st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_250_1 = fconvert.s(unimplemented  {fst dword [esp+0x94], st0})
                float var_248_1 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
                unimplemented  {fstp dword [esp+0x9c], st0}
                int32_t var_288_2 = 0
                int32_t var_284_2 = 0
                float var_24c_1 = fconvert.s(unimplemented  {fst dword [esp+0x98], st0})
                float var_240_1 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
                float var_234_1 = fconvert.s(unimplemented  {fst dword [esp+0xb0], st0})
                var_2c0 = fconvert.s(unimplemented  {fst dword [esp+0x24], st0})
                float var_2b0_1 = fconvert.s(unimplemented  {fst dword [esp+0x34], st0})
                float var_2ac_1 = fconvert.s(unimplemented  {fst dword [esp+0x38], st0})
                float var_2a4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x40], st0})
                unimplemented  {fstp dword [esp+0x40], st0}
                unimplemented  {fld st0, dword [0x8a55a4]}
                var_2a0 = fconvert.s(unimplemented  {fstp dword [esp+0x44], st0})
                unimplemented  {fstp dword [esp+0x44], st0}
                sub_4e0890(&var_260, nVirtKey)
                int32_t* eax_15 = data_3166860
                sub_4deaf0(eax_15, &data_be4aac, &var_260, &var_2c0, data_316685c, eax_15)
            
            nVirtKey = 0f
            sub_4dda30(nVirtKey)
            int32_t* eax_16 = sub_4d39e0()
            int32_t edx_5 = eax_16[1]
            int32_t ecx_8 = 0
            int32_t i_3
            
            if (edx_5 == 0)
            label_56af76:
                i_3 = 0
            else
                void* eax_17 = *eax_16
                
                while ((*(eax_17 + 0x68) & 0xffff0000) == 0)
                    ecx_8 += 1
                    eax_17 += 0x6c
                    
                    if (ecx_8 u>= edx_5)
                        goto label_56af76
                
                i_3 = *(eax_17 + 0x68)
            
            int32_t i = i_3
            
            if (i_3 != 0)
                do
                    int32_t edi_2 = *eax_16
                    int32_t esi_3 = eax_16[1]
                    int32_t ebx_1 = i & 0xffff
                    int32_t ecx_9 = ebx_1 + 1
                    void* eax_20 = ebx_1 * 0x6c + edi_2
                    
                    if (ecx_9 u>= esi_3)
                    label_56afc1:
                        i = 0
                    else
                        void* edx_9 = ecx_9 * 0x6c + edi_2
                        
                        while ((*(edx_9 + 0x68) & 0xffff0000) == 0)
                            ecx_9 += 1
                            edx_9 += 0x6c
                            
                            if (ecx_9 u>= esi_3)
                                goto label_56afc1
                        
                        i = *(edx_9 + 0x68)
                    
                    int32_t ecx_10 = *(eax_20 + 8)
                    unimplemented  {fld st0, dword [eax+0x24]}
                    int32_t edx_10 = *(eax_20 + 0xc)
                    var_2a0 = fconvert.s(unimplemented  {fstp dword [esp+0x3c], st0})
                    unimplemented  {fstp dword [esp+0x3c], st0}
                    int32_t var_28c_3 = ecx_10
                    int32_t var_284_3 = *(eax_20 + 0x10)
                    int32_t var_288_3 = edx_10
                    int32_t edx_11 = *(eax_20 + 0x14)
                    var_298 = *(eax_20 + 0x18)
                    int32_t var_29c_3 = edx_11
                    int32_t var_290_3 = *(eax_20 + 0x20)
                    int32_t var_294_3 = *(eax_20 + 0x1c)
                    __builtin_memcpy(&var_2c0, &var_2a0, 0x20)
                    void* ecx_14 = *(eax_20 + 0x2c)
                    var_2cc.d = 0
                    
                    if (ecx_14 != 0 && *(ecx_14 + 0xc) != 0)
                        var_2cc.d = eax_20
                    
                    char** edx_13 = *(eax_20 + 4)
                    sub_406370(&var_2a0, edx_13, &var_2c0)
                    nVirtKey = var_2cc.d
                    __builtin_memcpy(&var_260, &var_2a0, 0x40)
                    sub_4e0050(edx_13, &var_260, data_30792b0, 0f, nVirtKey)
                while (i != 0)
            
            int32_t* edi_3 = sub_4e79e0()
            int32_t* var_2c8_2 = edi_3
            void* ebx_2 = sub_4eabe0(edi_3)
            
            if (ebx_2 != 0)
                while (true)
                    int32_t edx_14 = edi_3[1]
                    void* ebx_3 = ebx_2 & 0xffff
                    int32_t ebx_4 = *edi_3
                    void* eax_27 = ebx_3 + 1
                    int32_t* esi_6 = ebx_3 * 0x94 + ebx_4
                    
                    if (eax_27 u>= edx_14)
                    label_56b0e7:
                        ebx_2 = nullptr
                    else
                        void* ecx_20 = eax_27 * 0x94 + ebx_4
                        
                        while ((*(ecx_20 + 0x90) & 0xffff0000) == 0)
                            eax_27 += 1
                            ecx_20 += 0x94
                            
                            if (eax_27 u>= edx_14)
                                goto label_56b0e7
                        
                        ebx_2 = *(ecx_20 + 0x90)
                    
                    nVirtKey = &data_be4c5c
                    sub_4e8530(esi_6, nullptr, nVirtKey)
                    nVirtKey = 1.21912966e-43f
                    
                    if ((0x8000 & GetKeyState(nVirtKey)) != 0 && *(data_27e7bbc + 0x18) != 0
                            && GetFocus() == data_30785e0)
                        if ((data_316686c & 0x10) == 0)
                            data_316686c.d |= 0x10
                            int32_t var_c_9 = 4
                            data_3166858 = sub_509140(5, "sys/SpriteWireFrame.material")
                            int32_t var_c_10 = 0xffffffff
                        
                        int32_t eax_31 = data_3166858
                        nVirtKey = &data_be4c5c
                        esi_6[0x21] = eax_31
                        sub_4e8530(esi_6, nullptr, nVirtKey)
                        esi_6[0x21] = 0
                    
                    if (ebx_2 == 0)
                        break
                    
                    edi_3 = var_2c8_2
            
            int32_t* eax_32 = sub_4eb140()
            int32_t edx_16 = eax_32[1]
            int32_t eax_33 = 0
            int32_t i_4
            
            if (edx_16 == 0)
            label_56b1b5:
                i_4 = 0
            else
                void* ecx_21 = *eax_32
                
                while ((*(ecx_21 + 0x78) & 0xffff0000) == 0)
                    eax_33 += 1
                    ecx_21 += 0x7c
                    
                    if (eax_33 u>= edx_16)
                        goto label_56b1b5
                
                i_4 = *(ecx_21 + 0x78)
            
            int32_t i_1 = i_4
            
            if (i_4 != 0)
                do
                    ebx_2 = *eax_32
                    int32_t esi_7 = i_1 & 0xffff
                    int32_t esi_8 = eax_32[1]
                    int32_t eax_35 = esi_7 + 1
                    
                    if (eax_35 u>= esi_8)
                    label_56b1f6:
                        i_1 = 0
                    else
                        void* edx_19 = eax_35 * 0x7c + ebx_2
                        
                        while ((*(edx_19 + 0x78) & 0xffff0000) == 0)
                            eax_35 += 1
                            edx_19 += 0x7c
                            
                            if (eax_35 u>= esi_8)
                                goto label_56b1f6
                        
                        i_1 = *(edx_19 + 0x78)
                    
                    if (*(esi_7 * 0x7c + ebx_2 + 0x20) != 1)
                        nVirtKey = &data_be4c5c
                        sub_4f2850(nVirtKey)
                while (i_1 != 0)
            
            result = data_3079214
            
            if (result == 1 || result == 2)
                result = sub_56cdf0()
                
                if (data_3079214 == 2)
                    void* eax_36 = data_3079208
                    
                    if (eax_36 != 0 && *(eax_36 + 4) == 0x12)
                        nVirtKey = 7.16063515e-43f
                        char var_220 = 0
                        int128_t var_21f[0x20]
                        sub_5abfc0(&var_21f, 0, nVirtKey)
                        
                        for (void* i_2 = nullptr; i_2 s< 0x8b; i_2 += 1)
                            char* eax_37 = &var_220
                            char j
                            
                            do
                                j = *eax_37
                                eax_37 = &eax_37[1]
                            while (j != 0)
                            sub_4184d0(&var_2dc + eax_37 - &var_21f + 0xbc, &var_21f, 
                                zx.d(*(i_2 + 0x8947e8)))
                        
                        unimplemented  {fldz }
                        nVirtKey = &data_840b50
                        var_2c0 = fconvert.s(unimplemented  {fst dword [esp+0x20], st0})
                        float var_2bc_2 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                        unimplemented  {fstp dword [esp+0x24], st0}
                        unimplemented  {fld st0, dword [0x8a5a1c]}
                        float var_2b8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                        unimplemented  {fstp dword [esp+0x28], st0}
                        var_2a0 = var_2c0
                        unimplemented  {fld st0, dword [0x8a5708]}
                        float var_2b4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
                        unimplemented  {fstp dword [esp+0x2c], st0}
                        var_298 = var_2b8_2
                        float var_29c_4 = var_2bc_2
                        float var_294_4 = var_2b4_2
                        int32_t edx_23 = sub_4da140(var_2bc_2, var_2b4_2, &var_2a0, nVirtKey)
                        unimplemented  {call 0x4da140}
                        char** ecx_29 = &var_2cc
                        int32_t edx_24 = sub_4c4330(&var_220, edx_23, ecx_29)
                        int32_t var_c_11 = 5
                        nVirtKey = 5.60519386e-45f
                        int32_t var_2e4_4 = 0xff000000
                        sub_4cc610(data_3079208, edx_24, ecx_29, &var_2a0)
                        int32_t var_c_12 = 0xffffffff
                        char* eax_43 = var_2cc.d
                        
                        if (eax_43 != 0 && *eax_43 != 0)
                            int32_t* eax_45 = sub_4c4060(&var_2cc)
                            int32_t temp1_1 = eax_45[1]
                            eax_45[1] -= 1
                            
                            if (temp1_1 == 1)
                                float nVirtKey_1 = eax_45[3] + 0x10
                                int32_t* eax_46 = sub_4f4380(nVirtKey_1)
                                nVirtKey = nVirtKey_1
                                sub_4f4430(eax_45, eax_46, nVirtKey)
                        
                        unimplemented  {fldz }
                        nVirtKey = &data_840bc4
                        var_2c0 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                        unimplemented  {fstp dword [esp+0x20], st0}
                        unimplemented  {fld st0, dword [0x8a5708]}
                        float var_2bc_3 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                        unimplemented  {fstp dword [esp+0x24], st0}
                        var_2a0 = var_2c0
                        unimplemented  {fld st0, dword [0x8a5a1c]}
                        float var_2b8_3 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                        unimplemented  {fstp dword [esp+0x28], st0}
                        float var_29c_5 = var_2bc_3
                        unimplemented  {fld st0, dword [0x846e8c]}
                        float var_2b4_3 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
                        unimplemented  {fstp dword [esp+0x2c], st0}
                        var_298 = var_2b8_3
                        float var_294_5 = var_2b4_3
                        int32_t edx_27 = sub_4da140(var_2bc_3, var_2b4_3, &var_2a0, nVirtKey)
                        unimplemented  {call 0x4da140}
                        char** ecx_32 = &var_2cc
                        int32_t edx_28 = sub_4c4330(&var_220, edx_27, ecx_32)
                        int32_t var_c_13 = 6
                        nVirtKey = 5.60519386e-45f
                        int32_t var_2e4_5 = 0xffffffff
                        sub_4cc610(data_3079208, edx_28, ecx_32, &var_2a0)
                        int32_t var_c_14 = 0xffffffff
                        result = var_2cc.d
                        
                        if (result != 0 && *result != 0)
                            result = sub_4c4060(&var_2cc)
                            int32_t temp2_1 = result[1]
                            result[1] -= 1
                            
                            if (temp2_1 == 1)
                                float nVirtKey_2 = result[3] + 0x10
                                int32_t* eax_52 = sub_4f4380(nVirtKey_2)
                                nVirtKey = nVirtKey_2
                                result = sub_4f4430(result, eax_52, nVirtKey)
                    
                    if (eax_36 == 0 || *(eax_36 + 4) != 0x12 || data_3079214 == 2)
                        void* eax_54 = data_27e7fe4
                        *(eax_54 + 0x254) = 0
                        __builtin_memcpy(eax_54 + 0x9c, 0x83faf8, 0x40)
                        *(eax_54 + 0xdc) = 0
                        result = sub_4e2080()
        else
            result = sub_572440()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_2cc)
    return result
}
