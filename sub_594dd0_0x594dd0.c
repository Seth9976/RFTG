// 函数名称: sub_594dd0
// 虚拟地址: 0x594dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_594dd0(void* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 0x18)
    int32_t* eax_1 = *(arg1 + 0x18)
    
    if (eax_1[8] == 0)
        *eax_1 = eax_1[7]
        int32_t ecx_1 = eax_1[9]
        eax_1[1] = ecx_1
        eax_1[8] = ecx_1
        return 1
    
    sub_4c5870("Halt", &data_83f3d3, "JpgImport.cpp", 0xf7, "fill_input_buffer")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
