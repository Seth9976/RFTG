// 函数名称: sub_5cc520
// 虚拟地址: 0x5cc520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t (**sub_5cc520(void* arg1, int32_t* arg2))(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    HWND hWnd = *(*(arg1 + 0x74) + 4)
    void* dwResSize = ((arg2[2] * arg2[3]) << 2) + 0x28
    __alloca_probe_16(dwResSize)
    int32_t __saved_edi
    int32_t (** result)(void* arg1) = sub_5dd990(&__saved_edi, dwResSize)
    
    if (result == 0)
        return result
    
    int32_t var_18_1 = 0x28
    sub_5dd880(result)
    int32_t var_20_1 = arg2[2]
    sub_5dd880(result)
    int32_t var_28_1 = arg2[3] * 2
    sub_5dd880(result)
    int32_t var_30_1 = 1
    sub_5dd860(result)
    int32_t var_38_1 = 0x20
    sub_5dd860(result)
    int32_t var_40_1 = 0
    sub_5dd880(result)
    int32_t var_48_1 = arg2[2] * arg2[3] * 4
    sub_5dd880(result)
    int32_t var_50_1 = 0
    sub_5dd880(result)
    int32_t var_18_2 = 0
    sub_5dd880(result)
    int32_t var_20_2 = 0
    sub_5dd880(result)
    int32_t var_28_2 = 0
    sub_5dd880(result)
    int32_t i = arg2[3]
    
    while (i != 0)
        int32_t eax_3 = arg2[4]
        i -= 1
        result[3](result, eax_3 * i + arg2[5], eax_3, 1)
    
    LPARAM lParam = CreateIconFromResource(&__saved_edi, dwResSize, 1, 0x30000)
    result[4](result)
    SendMessageW(hWnd, 0x80, 0, lParam)
    return SendMessageW(hWnd, 0x80, 1, lParam)
}
