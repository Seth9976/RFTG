// 函数名称: sub_505940
// 虚拟地址: 0x505940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_505940(int32_t* arg1 @ eax, float arg2)
{
    // 第一条实际指令: long double x87_r7 = sub_506850(0, arg1)
    long double x87_r7 = sub_506850(0, arg1)
    int32_t ebx = 0
    BOOL eax_8
    
    while (true)
        char* eax = *arg1
        float var_8_1 = fconvert.s(x87_r7)
        int32_t ecx_1
        
        if (eax == 0 || *eax == 0)
            ecx_1 = 0
        else
            if (*(eax - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx_1 = *(eax - 8)
        
        if (ebx s>= ecx_1)
            if (eax == 0 || *eax == 0)
                return 
            
            *(sub_4c4060(arg1) + 8)
            return 
        
        if (ebx s>= 0)
            int32_t ecx_2
            
            if (eax == 0 || *eax == 0)
                ecx_2 = 0
            else
                if (*(eax - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_2 = *(eax - 8)
            
            if (ebx s< ecx_2)
                if (eax == 0)
                    eax = &data_83f3d3
                
                char* ecx_3 = &eax[ebx]
                eax.b = *ecx_3
                
                if (eax.b u>= 0x80 && (eax.b & 0xe0) != 0xc0 && (eax.b & 0xf0) != 0xe0)
                    eax.b &= 0xf8
                    
                    if (eax.b != 0xf0)
                        sub_4c5870("!Xutf8_is_invalid_lead_char(str)", &data_83f3d3, 
                            "c:\ax2010\engine\Xutf8.cpp", 0x209, "Xutf8_peek_next")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                char* var_c = ecx_3
                uint32_t eax_1 = sub_4ba310(&var_c)
                int32_t eax_2
                
                if (eax_1 s< 0x80)
                    eax_2 = 1
                else if (eax_1 s>= 0x800)
                    int32_t ecx_4
                    ecx_4.b = eax_1 s>= 0x10000
                    eax_2 = ecx_4 + 3
                else
                    eax_2 = 2
                
                int32_t esi_2 = eax_2 + ebx
                var_c = fconvert.s(sub_506850(esi_2, arg1))
                x87_r7 = fconvert.t(arg2)
                long double x87_r4_1 = fconvert.t(var_8_1)
                var_c = fconvert.s(x87_r4_1
                    + (fconvert.t(var_c) - x87_r4_1) * fconvert.t(0.6600000262260437))
                long double x87_r5_5 = fconvert.t(var_c)
                x87_r5_5 - x87_r7
                
                if ((((x87_r5_5 < x87_r7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_5, x87_r7) ? 1 : 0) << 0xa
                        | (x87_r5_5 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
                    return 
                
                ebx = esi_2
                continue
        
        sub_4c5870("index >= 0 && index < mText.Length()", &data_83f3d3, "UITextBox.cpp", 0x9d, 
            "UITextBox::Utf8StringRightOneIndex")
        eax_8 = IsDebuggerPresent()
        break
    
    if (eax_8 == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
