// 函数名称: sub_6aaf60
// 虚拟地址: 0x6aaf60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6aaf60()
{
    // 第一条实际指令: int32_t eax_2 = data_27e7fc8
    int32_t eax_2 = data_27e7fc8
    
    if (eax_2 s< 0x100)
        *((eax_2 << 2) + &data_27e7bc8) = &data_8c06f4
        data_27e7fc8 = eax_2 + 1
        data_30d74d0 = &data_8c06f4
        return eax_2 + 1
    
    sub_4c5870("gDefTypeLookupCount < MAX_NUM_DEF_TYPES", &data_83f3d3, "DefTypeRegistry.cpp", 0x2a, 
        "RegisterDefMapBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
