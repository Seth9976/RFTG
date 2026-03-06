// 函数名称: sub_6ac9d0
// 虚拟地址: 0x6ac9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6ac9d0()
{
    // 第一条实际指令: int32_t eax_2 = data_3079074
    int32_t eax_2 = data_3079074
    
    if (eax_2 s< 0x20)
        *((eax_2 << 2) + &data_3079180) = &data_8bd334
        data_3079074 = eax_2 + 1
        data_315f7a8 = &data_8bd334
        return eax_2 + 1
    
    sub_4c5870("gAttribTableLookupCount < MAX_NUM_ATTRIB_TABLES", &data_83f3d3, 
        "AttribMapRegistry.cpp", 0x23, "RegisterAttribTableBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
