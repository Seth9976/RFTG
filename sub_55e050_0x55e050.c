// 函数名称: sub_55e050
// 虚拟地址: 0x55e050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_55e050(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = data_8bd348
    int32_t i = data_8bd348
    int32_t* ecx = &data_8bd348
    
    while (i != 0)
        if (i == arg2)
            return ecx[1]
        
        i = ecx[2]
        ecx = &ecx[2]
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x20d, "Dx11FormatFromTextureFormat")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
