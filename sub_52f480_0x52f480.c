// 函数名称: sub_52f480
// 虚拟地址: 0x52f480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_52f480()
{
    // 第一条实际指令: data_315b338 = 1
    data_315b338 = 1
    data_315b33c = 0
    int32_t var_c
    sub_4c6230(&var_c)
    int32_t eax = var_c
    data_315b340 = eax
    int32_t var_8
    data_315b344 = var_8
    data_315b350 = 0
    data_315b348 = eax
    data_315b34c = var_8
    sub_4c6230(&var_c)
    int32_t var_28 = var_8
    int32_t var_2c = var_c
    data_315b354 = sub_529dc0()
    int32_t* eax_3 = sub_52f2f0(0)
    data_315b35c = *eax_3
    data_315b360 = eax_3[1]
    data_315b364 = eax_3[2]
    data_315b368 = eax_3[3]
    int32_t* result = sub_52f2f0(1)
    data_315b36c = *result
    data_315b370 = result[1]
    data_315b374 = result[2]
    data_315b378 = result[3]
    int32_t i = 0
    data_315b358 = 0
    
    if (data_30da51c s> 0)
        void* ecx_5 = &data_315b37c
        
        do
            int32_t eax_5 = (&data_30d951c)[i]
            
            if (eax_5 s< 0)
                sub_4c5870("index >= 0", &data_83f3d3, "UI2.cpp", 0xeb7, "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_5 s>= data_30d94f0)
                sub_4c5870("index < gUI2Editor.numDisplayEls", &data_83f3d3, "UI2.cpp", 0xeb8, 
                    "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_6 = *((eax_5 << 3) + &data_30d74f0)
            i += 1
            ecx_5 += 0x10
            long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(eax_6 + 0x14c8))))
            long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(eax_6 + 0x14c8))))
            float var_14_1 = fconvert.s(
                (fconvert.t(*(eax_6 + 0x14d0)) - x87_r6_2) * fconvert.t(*(eax_6 + 0x1504)) + x87_r6_2)
            long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(*(eax_6 + 0x14cc))))
            float var_18_1 = fconvert.s(
                (fconvert.t(*(eax_6 + 0x14d4)) - x87_r6_3) * fconvert.t(*(eax_6 + 0x1500)) + x87_r6_3)
            long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(*(eax_6 + 0x14cc))))
            long double x87_r7_18 = fconvert.t(*(eax_6 + 0x14d4)) - x87_r6_4
            long double x87_r5_8 = fconvert.t(*(eax_6 + 0x1508))
            *(ecx_5 - 0x10) = fconvert.s(
                (fconvert.t(*(eax_6 + 0x14d0)) - x87_r6_1) * fconvert.t(*(eax_6 + 0x14fc)) + x87_r6_1)
            *(ecx_5 - 0xc) = var_18_1
            *(ecx_5 - 8) = var_14_1
            result = fconvert.s(x87_r7_18 * x87_r5_8 + x87_r6_4)
            *(ecx_5 - 4) = result
        while (i s< data_30da51c)
    
    return result
}
