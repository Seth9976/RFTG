// 函数名称: sub_40d210
// 虚拟地址: 0x40d210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_40d210(int32_t* arg1)
{
    // 第一条实际指令: char* edi = nullptr
    char* edi = nullptr
    int32_t result
    
    while (true)
        char* eax = *arg1
        
        if (eax == 0 || *eax == 0)
            result = 0
        else
            if (*(eax - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = *(eax - 8)
        
        if (edi s>= result)
            break
        
        char eax_4 = sub_5a757a(sx.d(*(sub_4c4410(arg1) + edi)))
        
        if ((eax_4 s< 0x41 || eax_4 s> 0x5a) && eax_4 - 0x30 u> 9)
            sub_505cf0(arg1, edi)
            int32_t eax_5 = arg1[1]
            
            if (eax_5 s> edi)
                arg1[1] = eax_5 - 1
            
            int32_t eax_7 = arg1[3]
            
            if (eax_7 s<= edi)
                continue
            else
                arg1[3] = eax_7 - 1
                continue
        
        sub_4c4740(arg1, edi, eax_4)
        edi = &edi[1]
    
    char* esi_1 = *arg1
    
    if (esi_1 != 0 && *esi_1 != 0)
        if (*(esi_1 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(esi_1 - 8) == 8)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
