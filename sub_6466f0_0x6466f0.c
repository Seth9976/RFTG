// 函数名称: sub_6466f0
// 虚拟地址: 0x6466f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6466f0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: char* var_8 = arg3
    char* var_8 = arg3
    int32_t edi = 0
    char* esi = arg3
    
    if (arg4 s> 0)
        void* eax = arg1 - esi
        void* var_8_1 = eax
        
        while (true)
            if (sub_5a757a(sx.d(*(eax + esi))) != sub_5a757a(sx.d(*esi)))
                return 1
            
            edi += 1
            esi = &esi[1]
            
            if (edi s>= arg4)
                break
            
            eax = var_8_1
    
    return 0
}
