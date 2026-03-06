// 函数名称: sub_55db60
// 虚拟地址: 0x55db60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55db60(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    eax[3] += arg3
    
    if (*eax == 0)
        int32_t* ecx_2 = *(arg1 + 0x10)
        return (*(*ecx_2 + 0x3c))(ecx_2, eax[6], 0)
    
    sub_4c5870("bufferData->mBufferType == DX11BUFFER_VERTEX", &data_83f3d3, "Windows\WindowsDx11.cpp", 
        0x148, "Dx11GraphicsInterface::UnlockVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
