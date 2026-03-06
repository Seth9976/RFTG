// 函数名称: sub_4cba10
// 虚拟地址: 0x4cba10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4cba10(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0x44)
    int32_t* result = *(arg1 + 0x44)
    
    for (int32_t i = 0; i s< 0xc8; )
        char* ecx_1 = *result
        uint32_t eax_2
        int32_t* entry_ebx
        
        if (ecx_1 != 0)
            eax_2 = sub_5a9697(ecx_1, sub_4c4410(entry_ebx))
        
        if (ecx_1 == 0 || eax_2 == 0)
            return result
        
        i += 1
        result = &result[0xd]
    
    sub_4c5870("Halt", &data_83f3d3, "Font.cpp", 0x2f8, "WrapperLookupEscapeTag")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
