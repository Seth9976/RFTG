// 函数名称: sub_4cb0b0
// 虚拟地址: 0x4cb0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __fastcallsub_4cb0b0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690128
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t ebx
    uint32_t var_34 = ebx
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = arg1
    char** arg_4
    char** eax_3 = arg_4
    float var_14 = fconvert.s(float.t(0))
    char** var_24
    void* edx
    char** edi
    
    if (eax_3 != 0)
        if (eax_3[1] != 0x12)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_24 = eax_3
        edi = eax_3
    else
        char** eax_4
        eax_4, arg1, edx = sub_50a390(eax_3 + 0x12)
        edi = eax_4
        var_24 = edi
    
    if (*edi == 0)
        arg1, edx = sub_5094d0(edi, 0, 1)
    
    char* eax_5 = *edi
    edi[7] = &edi[7][1]
    void* eax_6 = *eax_5
    int32_t var_8_1 = 0
    
    if (*(eax_6 + 0x14) == 0)
        edi[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return float.t(0)
    
    void* eax_7 = *(eax_6 + 0x18)
    char* eax_8 = esi
    char* var_20 = eax_8
    
    if (*esi != 0)
        while (true)
            ebx.b = *eax_8
            
            if (ebx.b u>= 0x80)
                arg1.b = ebx.b
                arg1.b &= 0xe0
                
                if (arg1.b != 0xc0)
                    edx.b = ebx.b
                    edx.b &= 0xf0
                    
                    if (edx.b != 0xe0)
                        arg1.b = ebx.b
                        arg1.b &= 0xf8
                        
                        if (arg1.b != 0xf0)
                            sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                                "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
            
            arg_4 = eax_8
            uint32_t i = sub_4ba310(&arg_4)
            arg_4 = var_20
            
            if (ebx.b u>= 0x80)
                uint32_t eax_9
                eax_9.b = ebx.b
                eax_9.b &= 0xe0
                
                if (eax_9.b != 0xc0 && (ebx.b & 0xf0) != 0xe0)
                    ebx.b &= 0xf8
                    
                    if (ebx.b != 0xf0)
                        sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                            "c:\ax2010\engine\Xutf8.cpp", 0x20f, "Xutf8_next")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
            
            sub_4ba310(&arg_4)
            char** eax_10 = arg_4
            ebx.b = *eax_10
            var_20 = eax_10
            arg_4:3.b = ebx.b
            
            if (ebx.b u>= 0x80 && (ebx.b & 0xe0) != 0xc0 && (ebx.b & 0xf0) != 0xe0
                    && (ebx.b & 0xf8) != 0xf0)
                sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                    "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char** var_1c = eax_10
            uint32_t eax_11
            eax_11, edx = sub_4ba310(&var_1c)
            void* eax_12
            
            if (i s>= 0x80)
                for (arg1 = *(*(eax_6 + 0x24) + (((i s>> 4 | i) & *(eax_6 + 0x28)) << 2)); arg1 != 0; 
                        arg1 = *(arg1 + 8))
                    if (i == *arg1)
                        if (arg1 == 0xfffffffc)
                            goto label_4cb2d6
                        
                        arg1 = *(arg1 + 4)
                        eax_12 = eax_6
                        goto label_4cb254
                
                goto label_4cb2d6
            
            eax_12 = eax_6
            arg1 = *(eax_12 + (i << 2) + 0x30)
            
            if (arg1 == 0xffffffff)
                goto label_4cb2d6
            
        label_4cb254:
            
            if (arg1 s< 0 || arg1 s>= *(eax_7 + 0x10))
                sub_4c5870("glyphIndex >= 0 && glyphIndex < pLayer->glyphCount", &data_83f3d3, 
                    "Font.cpp", 0xc7, "FontUnicodeToGlyph")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            arg1 = *(eax_7 + 0x14) + arg1 * 0x24
            
            if (arg1 == 0)
                goto label_4cb2d6
            
            var_1c = *(arg1 + 0x1c)
            
            if (eax_11 != 0)
                arg1 = *(arg1 + 0x20)
                
                if (arg1 != 0xffffffff)
                    int32_t esi_5 = *(eax_12 + 0x1c)
                    
                    if (arg1 s< esi_5)
                        edx = *(eax_12 + 0x20) + arg1 * 0xc
                        
                        while (*edx == i)
                            if (*(edx + 4) == eax_11)
                                var_1c += *(edx + 8)
                                break
                            
                            arg1 += 1
                            edx += 0xc
                            
                            if (arg1 s>= esi_5)
                                break
                        
                        ebx.b = arg_4:3.b
            
            var_14 = fconvert.s(float.t(var_1c) + fconvert.t(var_14))
            
            if (ebx.b == 0)
                edi = var_24
                break
            
            var_14 = fconvert.s(fconvert.t(*(eax_12 + 0x10)) + fconvert.t(var_14))
        label_4cb2d6:
            
            if (ebx.b != 0)
                eax_8 = var_20
                continue
            
            edi = var_24
            break
    
    edi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return fconvert.t(var_14)
}
