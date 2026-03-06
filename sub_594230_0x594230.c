// 函数名称: sub_594230
// 虚拟地址: 0x594230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_594230(int32_t* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: __chkstk(0x401c)
    __chkstk(0x401c)
    struct _EXCEPTION_REGISTRATION_RECORD* edi
    struct _EXCEPTION_REGISTRATION_RECORD* var_c = edi
    void** var_10 = nullptr
    int32_t var_14 = 0
    int128_t* eax = sub_661fc0("1.5.12", 0, 0, var_10)
    var_c = eax
    
    if (eax != 0)
        var_10 = eax
        int128_t* eax_1 = sub_663760(var_10)
        var_10 = eax_1
        
        if (eax_1 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD* ecx = var_c
            var_10 = 0x40
            int32_t* eax_2 = sub_664090(ecx, sub_5ab190, var_10)
            var_10 = nullptr
            int32_t __saved_ebp
            int32_t esi
            __setjmp3(&__saved_ebp, esi, edi, eax_2, var_10, var_c, esi)
            var_10 = sub_594160
            char* var_20 = arg2
            struct _EXCEPTION_REGISTRATION_RECORD* var_18_4 = var_c
            int32_t var_1c_1 = 0
            sub_664480(arg3, &var_20, var_10)
            int32_t edx_1 = arg1[2]
            
            if (edx_1 s> 0x1000)
                var_10 = "PngImportBitsToImageSpec"
                int32_t var_14_7 = 0xe4
                char const* const var_18_6 = "PngImport.cpp"
                char* const var_1c_2 = &data_83f3d3
                var_20 = "pDestImage->height <= MAX_ROWS"
                sub_4c5870(var_20, var_1c_2, var_18_6, var_14_7, var_10)
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t eax_5 = 0
            int32_t var_4020[0xffd]
            
            if (edx_1 s> 0)
                int32_t esi_3 = arg1[3]
                int32_t ecx_3 = *arg1
                
                do
                    var_4020[eax_5] = ecx_3
                    eax_5 += 1
                    ecx_3 += esi_3
                while (eax_5 s< edx_1)
            
            void** eax_6 = var_10
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_4 = var_c
            var_10 = &var_4020
            sub_665460(ecx_4, eax_6, var_10)
            struct _EXCEPTION_REGISTRATION_RECORD* eax_7 = var_c
            var_10 = eax_6
            sub_6620c0(eax_7, var_10)
            int32_t* edx_3 = var_c
            int32_t var_18_8 = 0
            int32_t var_1c_3 = 0x95
            var_20 = var_10
            sub_661dc0(edx_3, var_20, var_1c_3)
            int32_t eax_9 = sub_660f00(var_c, var_10)
            
            if (arg1[2] != eax_9)
                var_10 = "PngImportBitsToImageSpec"
                int32_t var_14_10 = 0xfd
                char const* const var_18_9 = "PngImport.cpp"
                char* const var_1c_4 = &data_83f3d3
                var_20 = "pDestImage->height == (int)png_get_image_height(png_ptr, info_ptr)"
                sub_4c5870(var_20, var_1c_4, var_18_9, var_14_10, var_10)
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            struct _EXCEPTION_REGISTRATION_RECORD* eax_11 = var_c
            var_10 = var_10
            int32_t eax_12 = sub_660ee0(eax_11, var_10)
            
            if (arg1[1] != eax_12)
                var_10 = "PngImportBitsToImageSpec"
                int32_t var_14_12 = 0xfe
                char const* const var_18_10 = "PngImport.cpp"
                char* const var_1c_5 = &data_83f3d3
                var_20 = "pDestImage->width == (int)png_get_image_width(png_ptr, info_ptr)"
                sub_4c5870(var_20, var_1c_5, var_18_10, var_14_12, var_10)
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            if (*arg1 == 0)
                var_10 = "PngImportBitsToImageSpec"
                int32_t var_14_13 = 0xff
                char const* const var_18_11 = "PngImport.cpp"
                char* const var_1c_6 = &data_83f3d3
                var_20 = "pDestImage->pImage != NULL"
                sub_4c5870(var_20, var_1c_6, var_18_11, var_14_13, var_10)
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            struct _EXCEPTION_REGISTRATION_RECORD* edx_5 = var_c
            var_10 = var_10
            uint32_t eax_16 = zx.d(sub_660f20(edx_5, var_10))
            
            if (eax_16 == 2)
                int32_t eax_21 = arg1[4]
                
                if (eax_21 != 1 && eax_21 != 4)
                    var_10 = "PngImportBitsToImageSpec"
                    int32_t var_14_17 = 0x107
                    char const* const var_18_14 = "PngImport.cpp"
                    char* const var_1c_9 = &data_83f3d3
                    var_20 = "pDestImage->format == TEXTUREFORMAT_ARGB8888 || pDestImage->format == 
                        TEXTUREFORMAT_ARGB0888"
                    sub_4c5870(var_20, var_1c_9, var_18_14, var_14_17, var_10)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_5941d0(arg1)
            else
                if (eax_16 != 6)
                    var_10 = "PngImportBitsToImageSpec"
                    int32_t var_14_15 = 0x10b
                    char const* const var_18_12 = "PngImport.cpp"
                    char* const var_1c_7 = &data_83f3d3
                    var_20 = "Halt"
                    sub_4c5870(var_20, var_1c_7, var_18_12, var_14_15, var_10)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (arg1[4] != 1)
                    var_10 = "PngImportBitsToImageSpec"
                    int32_t var_14_16 = 0x104
                    char const* const var_18_13 = "PngImport.cpp"
                    char* const var_1c_8 = &data_83f3d3
                    var_20 = "pDestImage->format == TEXTUREFORMAT_ARGB8888"
                    sub_4c5870(var_20, var_1c_8, var_18_13, var_14_16, var_10)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            var_10 = nullptr
            sub_661ff0(&var_c, &var_10, var_10)
            int32_t* eax_24
            eax_24.b = 1
            return eax_24
        
        var_10 = eax_1
        sub_661ff0(&var_c, eax_1, var_10)
    
    eax.b = 0
    return eax
}
