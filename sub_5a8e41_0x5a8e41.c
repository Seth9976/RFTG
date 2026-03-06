// 函数名称: sub_5a8e41
// 虚拟地址: 0x5a8e41
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a8e41(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t esp_1 = *(arg1 - 0x18)
    int32_t esp_1 = *(arg1 - 0x18)
    int32_t eax = *(arg1 - 0x24)
    *(arg1 - 0x20) = eax
    
    if (*(arg1 - 0x1c) != 0)
        __c_exit()
        return sub_5a8e5b(arg1) __tailcall
    
    *(esp_1 - 4) = eax
    _quick_exit()
    noreturn
}
