// 函数名称: sub_580320
// 虚拟地址: 0x580320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_580320(HWND arg1 @ edi, LRESULT arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT hWnd = arg2
    int32_t* esi = data_26a6554
    
    if (esi[1] != 0)
        void* eax_2 = esi[1]
        CHOOSECOLORA param0_1
        char var_328
        
        switch (*(eax_2 + 0x14) - 4)
            case 0
                __builtin_memset(&param0_1, 0, 0x24)
                param0_1.lStructSize = 0x24
                param0_1.hwndOwner = arg1
                param0_1.hInstance = *esi
                param0_1.rgbResult = sub_57ce70(*(esi[1] + 0x10))
                param0_1.lpCustColors = 0x8bc838
                param0_1.Flags = 3
                
                if (ChooseColorA(&param0_1) != 0)
                    uint32_t rgbResult = param0_1.rgbResult
                    uint32_t var_5ec_2 = zx.d((rgbResult u>> 0x10).b)
                    uint32_t var_5f0_1 = zx.d((rgbResult u>> 8).b)
                    uint32_t var_5f4_1 = zx.d(rgbResult.b)
                    _swprintf(&var_328, 0x104, "%d,%d,%d")
                    __free_base(*(*(data_26a6554 + 4) + 0x10))
                    *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&var_328)
            case 1
                int32_t param0
                sub_5abfc0(&param0, 0, 0x3c)
                char* edx_15 = *(esi[1] + 0x10)
                char* var_5ec_11 = edx_15
                void var_578
                sub_57e670(&var_578, edx_15)
                int32_t* eax_27 = data_26a6554
                param0 = 0x3c
                HWND var_5dc_1 = arg1
                param0_1.lpCustColors = *eax_27
                int32_t var_5cc_1 = 0x141
                void* var_5d4_1 = &var_578
                int32_t var_53c
                param0_1.lStructSize = var_53c
                
                if (ChooseFontA(&param0) != 0)
                    uint32_t lStructSize = param0_1.lStructSize
                    __free_base(*(*(data_26a6554 + 4) + 0x10))
                    *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(sub_57e6c0(&var_578))
            case 2
                char var_430 = 0
                int128_t var_42f[0x10]
                sub_5abfc0(&var_42f, 0, 0x103)
                var_328 = 0
                int128_t var_327[0x10]
                sub_5abfc0(&var_327, 0, 0x103)
                char var_118 = 0
                int128_t var_117[0x10]
                sub_5abfc0(&var_117, 0, 0x103)
                char var_220 = 0
                int128_t var_21f[0x10]
                sub_5abfc0(&var_21f, 0, 0x103)
                char var_538 = 0
                int128_t var_537[0x10]
                sub_5abfc0(&var_537, 0, 0x103)
                int32_t param0_2
                sub_5abfc0(&param0_2, 0, 0x58)
                param0_2 = 0x58
                HWND var_58c_1 = arg1
                char* var_5ec_3 = &var_538
                int32_t var_588_1 = *esi
                char* var_5f0_2 = &var_220
                char* var_5f4_8 = &var_118
                char* var_5f8_1 = &var_430
                sub_5a957c(*(esi[1] + 8), 
                    "Title: %32[^\r\n] Path: %256[^\r\n] Filter: %256[^\r\n] Default Extension: %32[^\r\n]")
                char* var_560_1
                
                if (boost::math::tools::evaluate_polynomial<5,long double,long double>(?I", &var_430)
                        == 0)
                    var_560_1 = "Select file"
                else
                    var_560_1 = &var_430
                
                int32_t eax_10
                int32_t ecx_11
                eax_10, ecx_11 =
                    boost::math::tools::evaluate_polynomial<5,long double,long double>(?I", &var_118)
                
                if (eax_10 != 0)
                    char* eax_11 = &var_118
                    
                    do
                        ecx_11.b = *eax_11
                        eax_11 = &eax_11[1]
                    while (ecx_11.b != 0)
                    
                    int32_t eax_12 = eax_11 - &var_117
                    void* eax_13 = &__saved_ebp + eax_12 - 0x115
                    void var_119
                    
                    if (*(&var_119 + eax_12) != 0)
                        do
                            if (*eax_13 == 0x5c)
                                *eax_13 = 0
                                break
                            
                            eax_13 -= 1
                        while (*eax_13 != 0)
                    
                    char* var_564_1 = &var_118
                
                char* var_584_1
                
                if (boost::math::tools::evaluate_polynomial<5,long double,long double>(?I", &var_220)
                        == 0)
                    var_584_1 = "All Files (*.*)"
                else
                    char* eax_15 = &var_220
                    
                    if (var_220 != 0)
                        do
                            if (*eax_15 == 9)
                                *eax_15 = 0
                            
                            eax_15 = &eax_15[1]
                        while (*eax_15 != 0)
                    
                    var_584_1 = &var_220
                
                char* var_554_1
                
                if (boost::math::tools::evaluate_polynomial<5,long double,long double>(?I", &var_538)
                        == 0)
                    var_554_1 = &data_89559c
                else
                    var_554_1 = &var_538
                
                char* var_574_1 = &var_328
                int32_t var_570_1 = 0x104
                int32_t var_55c_1 = 0x81804
                char* var_5a0
                char* eax_20
                
                if (GetOpenFileNameA(&param0_2) == 0)
                    var_5a0 = var_560_1
                    char* var_598_2 = var_584_1
                    char* var_594_2 = var_554_1
                    char* const var_59c_2 = &data_83f3d3
                    __free_base(*(*(data_26a6554 + 4) + 0x10))
                    eax_20 = &data_83f3d3
                else
                    var_5a0 = var_560_1
                    char* var_598_1 = var_584_1
                    char* var_594_1 = var_554_1
                    char* var_59c_1 = var_574_1
                    __free_base(*(*(data_26a6554 + 4) + 0x10))
                    eax_20 = var_574_1
                
                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(eax_20)
                __free_base(*(*(data_26a6554 + 4) + 8))
                sub_57e800(&var_5a0)
                *(*(data_26a6554 + 4) + 8) = sub_57ca20(0x31602e0)
            case 3
                sub_57ea50(arg1, *(eax_2 + 0x10))
                __free_base(*(*(data_26a6554 + 4) + 0x10))
                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&data_3160b98)
        
        ShowWindow(hWnd, SW_HIDE)
        SetFocus(arg1)
        RedrawWindow(arg1, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
        hWnd = sub_582980()
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return hWnd
}
