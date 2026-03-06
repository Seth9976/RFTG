// 函数名称: sub_579360
// 虚拟地址: 0x579360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_579360(char arg1)
{
    // 第一条实际指令: data_27bc448 = 1
    data_27bc448 = 1
    data_27bc44c = 0
    float var_20
    sub_4c6230(&var_20)
    float eax = var_20
    data_27bc450 = eax
    int32_t var_1c
    data_27bc454 = var_1c
    data_27bc460 = 0
    data_27bc458 = eax
    data_27bc45c = var_1c
    sub_4c6230(&var_20)
    int32_t var_34 = var_1c
    float var_38 = var_20
    data_27bc464 = sub_5781f0()
    float var_18
    int32_t* eax_3 = sub_579150(&var_18, 0)
    data_27bc46c = *eax_3
    data_27bc470 = eax_3[1]
    data_27bc474 = eax_3[2]
    data_27bc478 = eax_3[3]
    int32_t* eax_4 = sub_579150(&var_18, 1)
    data_27bc47c = *eax_4
    data_27bc480 = eax_4[1]
    data_27bc484 = eax_4[2]
    float edx_3 = eax_4[3]
    eax_4.b = arg1
    data_27bc468 = eax_4.b
    int32_t i = 0
    data_27bc488 = edx_3
    int32_t i_1 = 0
    
    if (data_273bc2c s> 0)
        int32_t* esi_1 = &data_27bc48c
        
        do
            int32_t* ecx_6 = data_273ac20
            int32_t ebx_1 = (&data_273ac2c)[i]
            
            if (ecx_6[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_6 == 0)
                sub_520800(i, edx_3.b, ecx_6, 0)
                
                if (*ecx_6 == 0)
                    sub_509540(ecx_6)
            
            int32_t* ecx_8 = **ecx_6
            int32_t eax_6 = 0
            int32_t* edx_4 = nullptr
            int32_t edi_3
            
            while (true)
                if (eax_6 s>= ecx_8[1])
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edi_3 = *ecx_8
                
                if (*(edx_4 + edi_3) == ebx_1)
                    break
                
                eax_6 += 1
                edx_4 = &edx_4[0x46]
            
            void* eax_7 = eax_6 * 0x118
            var_20 = fconvert.s(fconvert.t(*(eax_7 + edi_3 + 0xc)))
            long double x87_r6_1 = fconvert.t(var_20)
            void* eax_8 = eax_7 + edi_3
            esi_1 = &esi_1[4]
            var_18 = fconvert.s(
                (fconvert.t(*(eax_7 + edi_3 + 0x14)) - x87_r6_1) * fconvert.t(*(eax_7 + edi_3 + 0x74))
                + x87_r6_1)
            float edx_5 = var_18
            var_20 = fconvert.s(fconvert.t(*(eax_8 + 0xc)))
            long double x87_r6_2 = fconvert.t(var_20)
            float var_10_1 = fconvert.s(
                (fconvert.t(*(eax_8 + 0x14)) - x87_r6_2) * fconvert.t(*(eax_8 + 0x7c)) + x87_r6_2)
            var_20 = fconvert.s(fconvert.t(*(eax_8 + 0x10)))
            long double x87_r6_3 = fconvert.t(var_20)
            float var_14_1 = fconvert.s(
                (fconvert.t(*(eax_8 + 0x18)) - x87_r6_3) * fconvert.t(*(eax_8 + 0x78)) + x87_r6_3)
            var_20 = fconvert.s(fconvert.t(*(eax_8 + 0x10)))
            long double x87_r6_4 = fconvert.t(var_20)
            long double x87_r7_18 = fconvert.t(*(eax_8 + 0x18)) - x87_r6_4
            long double x87_r5_8 = fconvert.t(*(eax_8 + 0x80))
            esi_1[-4] = edx_5
            esi_1[-3] = var_14_1
            esi_1[-2] = var_10_1
            i = i_1 + 1
            i_1 = i
            edx_3 = fconvert.s(x87_r7_18 * x87_r5_8 + x87_r6_4)
            esi_1[-1] = edx_3
        while (i s< data_273bc2c)
    
    return i
}
