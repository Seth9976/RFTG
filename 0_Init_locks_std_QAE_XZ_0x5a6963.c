// 函数名称: ??0_Init_locks@std@@QAE@XZ
// 虚拟地址: 0x5a6963
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcall??0_Init_locks@std@@QAE@XZ(int32_t arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_4 = edi
    
    if (InterlockedIncrement(0x8b8000) == 0)
        for (void* i = &data_bec350; i s< 0xbec3b0; i += 0x18)
            __seterrormode(i)
    
    return arg1
}
