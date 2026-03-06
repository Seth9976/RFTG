// 函数名称: sub_4fea90
// 虚拟地址: 0x4fea90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4fea90(uint32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* esi_1 = *arg3 + arg4
    int32_t* esi_1 = *arg3 + arg4
    int32_t edi = *esi_1
    
    if (arg1 != 0)
        if ((arg3[0xa] & 0x100) == 0 || edi u> 0x100000)
            int32_t* var_10_1 = arg5
            int32_t* var_14_1 = arg3
            sub_4fe9b0(arg1, arg5, arg3, edi)
            
            if (edi != 0)
                _aligned_free_base(edi)
            
            *esi_1 = 0
    else if (edi != 0)
        sub_4c5870("pArrayStart == NULL", &data_83f3d3, "Definition.cpp", 0x1b4, 
            "DefinitionDeleteVariableArray")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
}
