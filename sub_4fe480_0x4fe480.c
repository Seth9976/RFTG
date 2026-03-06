// 函数名称: sub_4fe480
// 虚拟地址: 0x4fe480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fe480(char* arg1, int32_t arg2, void* arg3, void* arg4 @ edi)
{
    // 第一条实际指令: void* var_4 = arg3
    void* var_4 = arg3
    int32_t eax = *(arg4 + 0x10)
    
    if (eax - 1 u<= 0xf)
        uint32_t edx_1 = zx.d(*(eax + &jump_table_4fe528[2]:3))
        
        switch (edx_1)
            case 0
                return sub_4fe330(arg4, edx_1, arg3, arg1)
            case 1
                int32_t result = *(arg3 + 0x24)
                *arg1 = result
                return result
    
    if (eax s<= 0 || eax s>= 0x12)
        int32_t* ebx = *(arg3 + 0x24)
        
        if (ebx != 0)
            sub_5ab990(arg1, ebx, sub_4fe2c0(arg4))
            return sub_4ff350(arg1, arg4, 0, ebx)
        
        return sub_4fe7d0(arg1, arg4)
    
    sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0xdd, 
        "DefinitionFillArrayableFieldWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
