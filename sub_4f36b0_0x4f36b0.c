// 函数名称: sub_4f36b0
// 虚拟地址: 0x4f36b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f36b0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        *arg1 = sub_4cce80(0x1f000)
        arg1[2] = 0x400
        arg1[6] = "Particles"
        arg1[5] = 0xd328
        return 0xd328
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct ParticleSystem>::DataArrayInitialize")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
