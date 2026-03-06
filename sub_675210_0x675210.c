// 函数名称: sub_675210
// 虚拟地址: 0x675210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_675210(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* eax_1 = *(arg1 + 0x1c)
        
        if (eax_1 != 0)
            *(eax_1 + 0x28) = 0
            *(eax_1 + 0x2c) = 0
            *(eax_1 + 0x30) = 0
            return sub_675190(arg1)
    
    return 0xfffffffe
}
