// 函数名称: sub_562aa0
// 虚拟地址: 0x562aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_562aa0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 1)
    if (arg2 != 1)
        sub_4c5870("monitor == MONITOR_MAIN", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x851, 
            "Dx11GraphicsInterface::APIPresent")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_1 = *(arg1 + 0x14)
    int32_t result = (*(*eax_1 + 0x20))(eax_1, 0, 0)
    
    if (result s>= 0)
        return result
    
    int32_t result_1 = result
    sub_4c57f0("DX11 Error: %x\n")
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0xe8, "Dx11CheckHResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
