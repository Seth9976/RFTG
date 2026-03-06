// 函数名称: sub_5d4980
// 虚拟地址: 0x5d4980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4980(struct HINSTANCE__** arg1, int32_t* arg2)
{
    // 第一条实际指令: HMODULE eax = sub_5def10("D3D9.DLL")
    HMODULE eax = sub_5def10("D3D9.DLL")
    *arg1 = eax
    
    if (eax == 0)
        *arg2 = 0
        return 0
    
    int32_t eax_1 = sub_5defa0(eax, "Direct3DCreate9")
    
    if (eax_1 != 0)
        *arg2 = eax_1(0x80000020)
    
    if (*arg2 != 0)
        return 1
    
    sub_5df000(*arg1)
    *arg1 = nullptr
    return 0
}
