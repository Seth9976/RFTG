// 函数名称: sub_5a6300
// 虚拟地址: 0x5a6300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a6300(int32_t arg1, int128_t** arg2, void** arg3, int32_t* arg4, int32_t* arg5, void** arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg5
    int32_t* var_438 = ebx
    int32_t* eax_3 = sub_5a898b(arg4, "rb")
    int32_t result
    
    if (eax_3 != 0)
        char const* const var_458_3
        void var_41c
        
        if (sub_5a9cf0(&var_41c, 8, 1, eax_3) != 1)
        label_5a637f:
            int32_t* var_454_3 = arg4
        label_5a6380:
            var_458_3 = "failed to read tiff file: %s"
            goto label_5a6385
        
        if (sub_5a7934(&var_41c, "II", 2) == 0)
            int16_t var_41a
            
            if (var_41a != 0x2a)
                int32_t* var_454_6 = arg4
                var_458_3 = "invalid tiff file: %s"
                goto label_5a6385
            
            void* var_418
            sub_5a9831(eax_3, var_418, FILE_BEGIN)
            int16_t var_428
            
            if (sub_5a9cf0(&var_428, 2, 1, eax_3) != 1)
                goto label_5a637f
            
            int32_t var_424_1 = 0
            int128_t var_408[0x20]
            __builtin_memset(&var_408, 0xffffffff, 0x200)
            void* eax_7 = sub_5a9a41(eax_3)
            int32_t var_430_1 = 0
            void* var_208
            
            if (0 u< var_428)
                while (true)
                    sub_5a9831(eax_3, eax_7, FILE_BEGIN)
                    int16_t var_414
                    
                    if (sub_5a9cf0(&var_414, 0xc, 1, eax_3) == 1)
                        void* eax_9 = sub_5a9a41(eax_3)
                        
                        if (zx.d(var_414) - 0x100 u> 0x17)
                            goto label_5a652d
                        
                        int32_t var_410
                        void* var_40c
                        
                        switch (var_414)
                            case 0x100
                                *arg6 = var_40c
                            label_5a652d:
                                bool cond:0_1 = (var_430_1 + 1).w u< var_428
                                var_430_1 += 1
                                eax_7 = eax_9
                                
                                if (not(cond:0_1))
                                    goto label_5a654a
                                
                                continue
                            case 0x101
                                *arg3 = var_40c
                                goto label_5a652d
                            case 0x102
                                int16_t var_412
                                void* edi_2 = sub_5a62b0(zx.d(var_412)) * var_410
                                
                                if (edi_2 u> 4)
                                    __alloca_probe_16(edi_2)
                                    sub_5a9831(eax_3, var_40c, FILE_BEGIN)
                                    int32_t __saved_edi
                                    
                                    if (sub_5a9cf0(&__saved_edi, edi_2, 1, eax_3) != 1)
                                        int32_t* var_454_20 = arg4
                                        goto label_5a6380
                                    
                                    int32_t eax_18 = 0
                                    
                                    if (var_410 s> 0)
                                        do
                                            if (*(&__saved_edi + (eax_18 << 1)) != 8)
                                                sub_4c5870("pwBPS[i] == 8", &data_83f3d3, 
                                                    "TIFFImport.cpp", 0xdf, "TIFFReadFile")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            eax_18 += 1
                                        while (eax_18 s< var_410)
                                    
                                    ebx = var_438
                                else if (var_410 != 2 && var_40c != 8)
                                    sub_4c5870("tIFDEntry.dwOffset == 8", &data_83f3d3, 
                                        "TIFFImport.cpp", 0xea, "TIFFReadFile")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                goto label_5a652d
                            case 0x103
                                if (var_40c == 1)
                                    goto label_5a652d
                                
                                sub_4c5680("Reading compressed tiff files is not supported")
                                sub_5a8c61(eax_3)
                                result.b = 0
                                goto label_5a6852
                            case 0x104, 0x105, 0x106, 0x107, 0x108, 0x109, 0x10a, 0x10b, 0x10c, 0x10d, 
                                    0x10e, 0x10f, 0x110, 0x112, 0x113, 0x114, 0x116
                                goto label_5a652d
                            case 0x111
                                var_424_1 = var_410
                                
                                if (var_410 != 1)
                                    sub_5a9831(eax_3, var_40c, FILE_BEGIN)
                                    
                                    if (sub_5a9cf0(&var_408, var_410 << 2, 1, eax_3) != 1)
                                        break
                                else
                                    var_408[0].d = var_40c
                                
                                goto label_5a652d
                            case 0x115
                                if (var_40c == 1)
                                    *ebx = 0xb
                                else if (var_40c == 3)
                                    *ebx = 5
                                else
                                    if (var_40c != 4)
                                        void* var_454_22 = var_40c
                                        var_458_3 = "Unsupported tiff samples per pixel (%d)"
                                        goto label_5a6385
                                    
                                    *ebx = 1
                                
                                goto label_5a652d
                            case 0x117
                                if (var_424_1 == 1)
                                    var_208 = var_40c
                                    goto label_5a652d
                                
                                sub_5a9831(eax_3, var_40c, FILE_BEGIN)
                                
                                if (sub_5a9cf0(&var_208, var_424_1 << 2, 1, eax_3) == 1)
                                    goto label_5a652d
                    
                    int32_t* var_454_19 = arg4
                    goto label_5a6380
                
                goto label_5a66ac
            
        label_5a654a:
            sub_5a9831(eax_3, eax_7, FILE_BEGIN)
            int32_t var_43c
            
            if (sub_5a9cf0(&var_43c, 4, 1, eax_3) != 1)
            label_5a66ac:
                int32_t* var_454_17 = arg4
                goto label_5a6380
            
            if (var_43c != 0)
                sub_4c5870("dwEndMarker == 0", &data_83f3d3, "TIFFImport.cpp", 0x13e, "TIFFReadFile")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (arg2 != 0)
                int32_t ebx_1 = var_424_1
                int32_t edx_6 = 0
                int32_t edi_5 = 0
                int32_t eax_34 = 0
                int32_t i = 0
                
                if (ebx_1 s>= 2)
                    do
                        edx_6 += (&var_208)[i]
                        int32_t var_204[0x7f]
                        edi_5 += var_204[i]
                        i += 2
                    while (i s< ebx_1 - 1)
                    
                    ebx_1 = var_424_1
                
                if (i s< ebx_1)
                    eax_34 = (&var_208)[i]
                
                int32_t edx_7 = edx_6 + edi_5
                
                if (eax_34 == neg.d(edx_7))
                    sub_4c5870("dwImageSize != 0", &data_83f3d3, "TIFFImport.cpp", 0x147, 
                        "TIFFReadFile")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int128_t* eax_37 = sub_4cce80(eax_34 + edx_7)
                int32_t edi_6 = 0
                *arg2 = eax_37
                int128_t* ebx_3 = eax_37
                
                if (var_424_1 s> 0)
                    do
                        void* eax_38 = *(&var_408 + (edi_6 << 2))
                        
                        if (eax_38 == 0xffffffff)
                            sub_4c5870("dwDataOffset[i] != -1", &data_83f3d3, "TIFFImport.cpp", 0x14d, 
                                "TIFFReadFile")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        sub_5a9831(eax_3, eax_38, FILE_BEGIN)
                        
                        if (sub_5a9cf0(ebx_3, (&var_208)[edi_6], 1, eax_3) != 1)
                            goto label_5a66ac
                        
                        ebx_3 += (&var_208)[edi_6]
                        edi_6 += 1
                    while (edi_6 s< var_424_1)
            
            sub_5a8c61(eax_3)
            result.b = 1
        else
            int32_t* var_454_5 = arg4
            var_458_3 = "tiff needs IBM byte order: %s"
        label_5a6385:
            sub_4c5680(var_458_3)
            sub_5a8c61(eax_3)
            result.b = 0
    else
        int32_t* var_454_1 = arg4
        sub_4c5680("failed to open tiff file: %s")
        result.b = 0
    
    label_5a6852:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
