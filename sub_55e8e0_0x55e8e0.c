// 函数名称: sub_55e8e0
// 虚拟地址: 0x55e8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55e8e0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    
    if (*eax == 2)
        int32_t* ecx_1 = *(arg1 + 0x10)
        return (*(*ecx_1 + 0xd8))(ecx_1, eax[8])
    
    sub_4c5870("bufferData->mBufferType == DX11BUFFER_TEXTURE", &data_83f3d3, 
        "Windows\WindowsDx11.cpp", 0x300, "Dx11GraphicsInterface::TextureBufferCreateMipmaps")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
