// 函数名称: sub_4fe230
// 虚拟地址: 0x4fe230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fe230(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x10)
    int32_t result = *(arg1 + 0x10)
    
    if (result - 1 u> 0x2a)
    label_4fe24c:
        
        if (result s<= 0)
            result.b = 0
            return result
        
        if (result s>= 0x12)
            result.b = 0
            return result
        
        sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0x65, 
            "DefTypeCanBeInArray")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_4c5a30() __tailcall
        
        breakpoint
    
    switch (result + &jump_table_4fe288[2]:3)
        case &lookup_table_4fe294, &lookup_table_4fe294[1], &lookup_table_4fe294[2], 
                &lookup_table_4fe294[3], &lookup_table_4fe294[7], &lookup_table_4fe294[9], 
                &lookup_table_4fe294[0xd], &lookup_table_4fe294[0xe], &lookup_table_4fe294[0xf], 
                &lookup_table_4fe294[0x14], &lookup_table_4fe294[0x15], &lookup_table_4fe294[0x16], 
                &lookup_table_4fe294[0x17], &lookup_table_4fe294[0x18], &lookup_table_4fe294[0x19], 
                &lookup_table_4fe294[0x1a], &lookup_table_4fe294[0x1b], &lookup_table_4fe294[0x1c], 
                &lookup_table_4fe294[0x1d], &lookup_table_4fe294[0x22], &lookup_table_4fe294[0x27], 
                &lookup_table_4fe294[0x28], &lookup_table_4fe294[0x29], &lookup_table_4fe294[0x2a]
            result.b = 1
            return result
        case &lookup_table_4fe294[4], &lookup_table_4fe294[5], &lookup_table_4fe294[8], 
                &lookup_table_4fe294[0xa], &lookup_table_4fe294[0xb], &lookup_table_4fe294[0x10]
            result.b = 0
            return result
        case &lookup_table_4fe294[6], &lookup_table_4fe294[0xc], &lookup_table_4fe294[0x11], 
                &lookup_table_4fe294[0x12], &lookup_table_4fe294[0x13], &lookup_table_4fe294[0x1e], 
                &lookup_table_4fe294[0x1f], &lookup_table_4fe294[0x20], &lookup_table_4fe294[0x21], 
                &lookup_table_4fe294[0x23], &lookup_table_4fe294[0x24], &lookup_table_4fe294[0x25], 
                &lookup_table_4fe294[0x26]
            goto label_4fe24c
}
