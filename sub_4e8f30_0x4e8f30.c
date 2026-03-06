// 函数名称: sub_4e8f30
// 虚拟地址: 0x4e8f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e8f30(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t* arg5)
{
    // 第一条实际指令: if (arg1 s>= 0)
    if (arg1 s>= 0)
        void* esi_1 = arg4
        
        if (arg1 s< *(esi_1 + 0x14))
            int32_t ecx = *(esi_1 + 0x10)
            int32_t eax = arg1 * 5
            int32_t edi = *(ecx + (eax << 2) + 4)
            void* eax_1 = ecx + (eax << 2)
            
            if (edi s< 0 || edi s>= *(esi_1 + 0x1c))
                sub_4c5870("vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount", 
                    &data_83f3d3, "Flanim.cpp", 0x36c, "FlanimGetTransformAtFrame")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t edi_3 = edi * 0x60 + *(esi_1 + 0x18)
            arg5[0x10] = sub_4e8a50(4, arg3, edi_3)
            arg5[0x11] = sub_4e8a50(5, arg3, edi_3)
            int32_t eax_4 = sub_4e8a50(6, arg3, edi_3)
            int32_t var_8 = eax_4
            
            if (eax_4 s< 0)
                int32_t var_70_1 = eax_4
                sub_4c5680("image index <0 (%d)")
                eax_4 = var_8
            
            int32_t ecx_5 = *(esi_1 + 0x24)
            
            if (eax_4 s>= ecx_5)
                int32_t var_70_2 = ecx_5
                int32_t var_74_1 = eax_4
                sub_4c5680("image index >end (%d >= %d)")
                eax_4 = var_8
            
            if (eax_4 s< 0 || eax_4 s>= *(esi_1 + 0x24))
                sub_4c5870("imageIndex >=0 && imageIndex < pFlanimDef->mImageCount", &data_83f3d3, 
                    "Flanim.cpp", 0x375, "FlanimGetTransformAtFrame")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            arg5[0x12] = *(*(esi_1 + 0x20) + (eax_4 << 2))
            arg5[0x13] = sub_4e8a50(7, arg3, edi_3)
            int32_t eax_7 = *(eax_1 + 4)
            int32_t edx_7 = *(eax_1 + 8)
            
            if (eax_7 != edx_7)
                int32_t* edi_9 = arg5
                int32_t var_10_13 = 0
                int32_t* var_8_3 = eax_1 + 4
                BOOL eax_41
                
                while (true)
                    int32_t eax_35 = *var_8_3
                    
                    if (eax_35 s< 0 || eax_35 s>= *(esi_1 + 0x1c))
                        sub_4c5870("vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount", 
                            &data_83f3d3, "Flanim.cpp", 0x3c1, "FlanimGetTransformAtFrame")
                        eax_41 = IsDebuggerPresent()
                        break
                    
                    int32_t esi_6 = eax_35 * 0x60 + *(arg4 + 0x18)
                    int32_t eax_37
                    int32_t edx_29
                    eax_37, edx_29 = sub_4e8b60(0, arg3, esi_6)
                    *edi_9 = eax_37
                    edi_9[1] = edx_29
                    int32_t eax_38
                    int32_t edx_31
                    eax_38, edx_31 = sub_4e8b60(1, arg3, esi_6)
                    var_8_3 = &var_8_3[1]
                    edi_9[2] = eax_38
                    int32_t eax_40 = var_10_13 + 1
                    edi_9[3] = edx_31
                    edi_9 = &edi_9[4]
                    var_10_13 = eax_40
                    
                    if (eax_40 s>= 4)
                        return 
                    
                    esi_1 = arg4
                    continue
                
                if (eax_41 == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_10 = *(eax_1 + 0xc)
            
            if (edx_7 != ecx_10 || ecx_10 != *(eax_1 + 0x10))
                sub_4c5870(
                    "pLayerDef->mQuad.y == pLayerDef->mQuad.z && pLayerDef->mQuad.z == pLayerDef->mQuad.w", 
                    &data_83f3d3, "Flanim.cpp", 0x37d, "FlanimGetTransformAtFrame")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            if (eax_7 s< 0 || eax_7 s>= *(esi_1 + 0x1c))
                sub_4c5870("vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount", &data_83f3d3, 
                    "Flanim.cpp", 0x381, "FlanimGetTransformAtFrame")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t edi_7 = eax_7 * 0x60 + *(esi_1 + 0x18)
            float eax_8
            int32_t edx_9
            eax_8, edx_9 = sub_4e8b60(0, arg3, edi_7)
            float var_1c = eax_8
            int32_t var_18 = edx_9
            float eax_9
            int32_t edx_11
            eax_9, edx_11 = sub_4e8b60(2, arg3, edi_7)
            float var_14 = eax_9
            int32_t var_10_1 = edx_11
            float eax_10
            int32_t edx_13
            eax_10, edx_13 = sub_4e8b60(3, arg3, edi_7)
            float var_c = eax_10
            int32_t var_8_1 = edx_13
            float var_60[0x9]
            sub_4eae20(&var_60, &var_14, &var_1c)
            int32_t* eax_11 = arg5[0x12]
            float edx_14
            
            if (eax_11 == 0)
                edx_14 = 0f
                var_c = 0f
            else
                float eax_12
                eax_12, edx_14 = sub_418560(eax_11)
                var_c = eax_12
            
            long double x87_r7 = float.t(0)
            float var_3c
            float var_34
            float var_2c
            float var_24
            float edx_16
            
            if (*(arg4 + 0x30) != 0)
                long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(var_c) / fconvert.t(edx_14)))
                long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(-0.5) * x87_r7_3))
                var_14 = fconvert.s(x87_r6_2)
                long double x87_r5_1 = fconvert.t(-0.5f)
                var_3c = var_14
                float var_38 = fconvert.s(x87_r5_1)
                long double x87_r5_4 = fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(0.5)))
                var_14 = fconvert.s(x87_r5_4)
                var_34 = var_14
                float var_30 = fconvert.s(x87_r5_1)
                var_14 = fconvert.s(x87_r6_2)
                long double x87_r6_3 = fconvert.t(0.5f)
                var_2c = var_14
                edx_16 = fconvert.s(x87_r6_3)
                float var_28 = edx_16
                var_14 = fconvert.s(x87_r5_4)
                var_24 = var_14
                float var_20 = fconvert.s(x87_r6_3)
            else if (*(arg4 + 0x31) == 0)
                var_1c = fconvert.s(x87_r7)
                float var_18_5 = fconvert.s(x87_r7)
                long double x87_r6_14 = fconvert.t(var_c)
                var_3c = var_1c
                var_1c = fconvert.s(x87_r6_14)
                float eax_20 = var_1c
                float var_38_2 = var_18_5
                float var_18_6 = fconvert.s(x87_r7)
                var_1c = fconvert.s(x87_r7)
                float edx_20 = var_1c
                long double x87_r6_16 = fconvert.t(edx_14)
                var_34 = eax_20
                float var_18_7 = fconvert.s(x87_r6_16)
                float var_30_2 = var_18_6
                var_1c = fconvert.s(x87_r6_14)
                float ecx_21 = var_1c
                var_2c = edx_20
                edx_16 = fconvert.s(x87_r6_16)
                float var_28_2 = var_18_7
                var_24 = ecx_21
                float var_20_2 = edx_16
            else
                long double x87_r7_7 = fconvert.t(var_c)
                long double x87_r5_6 = fconvert.t(-0.5)
                long double x87_r5_8 = fconvert.t(fconvert.s(x87_r7_7 * x87_r5_6))
                var_1c = fconvert.s(x87_r5_8)
                long double x87_r4_1 = fconvert.t(edx_14)
                var_3c = var_1c
                long double x87_r4_3 = fconvert.t(fconvert.s(x87_r5_6 * x87_r4_1))
                long double x87_r3_2 = fconvert.t(0.5)
                float var_38_1 = fconvert.s(x87_r4_3)
                long double x87_r3_4 = fconvert.t(fconvert.s(x87_r7_7 * x87_r3_2))
                var_1c = fconvert.s(x87_r3_4)
                var_34 = var_1c
                float var_30_1 = fconvert.s(x87_r4_3)
                var_1c = fconvert.s(x87_r5_8)
                var_2c = var_1c
                long double x87_r6_12 = fconvert.t(fconvert.s(x87_r3_2 * x87_r4_1))
                float var_28_1 = fconvert.s(x87_r6_12)
                var_1c = fconvert.s(x87_r3_4)
                edx_16 = var_1c
                var_24 = edx_16
                float var_20_1 = fconvert.s(x87_r6_12)
            
            float eax_23
            int32_t edx_21
            eax_23, edx_21 = sub_4cce40(&var_60, edx_16, &var_3c)
            *arg5 = eax_23
            arg5[1] = edx_21
            float eax_25
            int32_t edx_22
            eax_25, edx_22 = sub_4cce40(&var_60, edx_21, &var_34)
            arg5[4] = eax_25
            arg5[5] = edx_22
            float eax_27
            int32_t edx_23
            eax_27, edx_23 = sub_4cce40(&var_60, edx_22, &var_2c)
            arg5[8] = eax_27
            arg5[9] = edx_23
            float eax_29
            int32_t edx_24
            eax_29, edx_24 = sub_4cce40(&var_60, edx_23, &var_24)
            long double x87_r7_15 = float.t(0)
            var_1c = fconvert.s(x87_r7_15)
            arg5[0xc] = eax_29
            float eax_30 = var_1c
            float var_18_9 = fconvert.s(x87_r7_15)
            long double x87_r6_18 = float.t(1)
            var_1c = fconvert.s(x87_r6_18)
            arg5[0xd] = edx_24
            arg5[2] = eax_30
            float edx_25 = var_1c
            float var_18_10 = fconvert.s(x87_r7_15)
            var_1c = fconvert.s(x87_r7_15)
            arg5[3] = var_18_9
            float ecx_27 = var_1c
            arg5[6] = edx_25
            float var_18_11 = fconvert.s(x87_r6_18)
            var_1c = fconvert.s(x87_r6_18)
            arg5[7] = var_18_10
            float eax_32 = var_1c
            float var_18_12 = fconvert.s(x87_r6_18)
            arg5[0xa] = ecx_27
            arg5[0xb] = var_18_11
            arg5[0xe] = eax_32
            arg5[0xf] = var_18_12
            return 
    
    sub_4c5870("layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount", &data_83f3d3, "Flanim.cpp", 
        0x367, "FlanimGetTransformAtFrame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
