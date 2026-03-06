// 函数名称: sub_4fd020
// 虚拟地址: 0x4fd020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4fd020(int32_t* arg1 @ edi)
{
    // 第一条实际指令: char* esi = nullptr
    char* esi = nullptr
    char* result
    
    while (true)
        result = *arg1
        int32_t ecx_1
        
        if (result == 0 || *result == 0)
            ecx_1 = 0
        else
            if (*(result - 0x10) != 0xfafafafa)
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx_1 = *(result - 8)
        
        if (esi s>= ecx_1)
            break
        
        esi[*arg1] = sub_5aa073(sx.d(*(result + esi)))
        esi = &esi[1]
    
    return result
}
