ROR_LFSDET  ((uint32_t)0x00000008U)  /*!< Late Frame synchronisation detection        */
#define HAL_SAI_ERROR_CNREADY ((uint32_t)0x00000010U)  /*!< codec not ready                             */
#define HAL_SAI_ERROR_WCKCFG  ((uint32_t)0x00000020U)  /*!< Wrong clock configuration                   */
#define HAL_SAI_ERROR_TIMEOUT ((uint32_t)0x00000040U)  /*!< Timeout error                               */
#define HAL_SAI_ERROR_DMA     ((uint32_t)0x00000080U)  /*!< DMA error                                   */
/**
  * @}
  */

/** @defgroup SAI_Block_SyncExt SAI External synchronisation
  * @{
  */
#define SAI_SYNCEXT_DISABLE          0
#define SAI_SYNCEXT_OUTBLOCKA_ENABLE 1
#define SAI_SYNCEXT_OUTBLOCKB_ENABLE 2
/**
  * @}
  */

/** @defgroup SAI_Protocol SAI Supported protocol
  * @{
  */
#define SAI_I2S_STANDARD      0
#define SAI_I2S_MSBJUSTIFIED  1
#define SAI_I2S_LSBJUSTIFIED  2
#define SAI_PCM_LONG          3
#define SAI_PCM_SHORT         4
/**
  * @}
  */

/** @defgroup SAI_Protocol_DataSize SAI protocol data size
  * @{
  */
#define SAI_PROTOCOL_DATASIZE_16BIT         0
#define SAI_PROTOCOL_DATASIZE_16BITEXTENDED 1
#define SAI_PROTOCOL_DATASIZE_24BIT         2
#define SAI_PROTOCOL_DATASIZE_32BIT         3
/**
  * @}
  */

/** @defgroup SAI_Audio_Frequency SAI Audio Frequency
  * @{
  */
#define SAI_AUDIO_FREQUENCY_192K          ((uint32_t)192000U)
#define SAI_AUDIO_FREQUENCY_96K           ((uint32_t)96000U)
#define SAI_AUDIO_FREQUENCY_48K           ((uint32_t)48000U)
#define SAI_AUDIO_FREQUENCY_44K           ((uint32_t)44100U)
#define SAI_AUDIO_FREQUENCY_32K           ((uint32_t)32000U)
#define SAI_AUDIO_FREQUENCY_22K           ((uint32_t)22050U)
#define SAI_AUDIO_FREQUENCY_16K           ((uint32_t)16000U)
#define SAI_AUDIO_FREQUENCY_11K           ((uint32_t)11025U)
#define SAI_AUDIO_FREQUENCY_8K            ((uint32_t)8000U)
#define SAI_AUDIO_FREQUENCY_MCKDIV        ((uint32_t)0U)
/**
  * @}
  */

/** @defgroup SAI_Block_Mode SAI Block Mode
  * @{
  */
#define SAI_MODEMASTER_TX         ((uint32_t)0x00000000U)
#define SAI_MODEMASTER_RX         ((uint32_t)SAI_xCR1_MODE_0)
#define SAI_MODESLAVE_TX          ((uint32_t)SAI_xCR1_MODE_1)
#define SAI_MODESLAVE_RX          ((uint32_t)(SAI_xCR1_MODE_1 | SAI_xCR1_MODE_0))

/**
  * @}
  */

/** @defgroup SAI_Block_Protocol SAI Block Protocol
  * @{
  */
#define SAI_FREE_PROTOCOL                 ((uint32_t)0x00000000U)
#define SAI_SPDIF_PROTOCOL                ((uint32_t)SAI_xCR1_PRTCFG_0)
#define SAI_AC97_PROTOCOL                 ((uint32_t)SAI_xCR1_PRTCFG_1)
/**
  * @}
  */

/** @defgroup SAI_Block_Data_Size SAI Block Data Size
  * @{
  */
#define SAI_DATASIZE_8     ((uint32_t)SAI_xCR1_DS_1)
#define SAI_DATASIZE_10    ((uint32_t)(SAI_xCR1_DS_1 | SAI_xCR1_DS_0))
#define SAI_DATASIZE_16    ((uint32_t)SAI_xCR1_DS_2)
#define SAI_DATASIZE_20    ((uint32_t)(SAI_xCR1_DS_2 | SAI_xCR1_DS_0))
#define SAI_DATASIZE_24    ((uint32_t)(SAI_xCR1_DS_2 | SAI_xCR1_DS_1))
#define SAI_DATASIZE_32    ((uint32_t)(SAI_xCR1_DS_2 | SAI_xCR1_DS_1 | SAI_xCR1_DS_0))
/**
  * @}
  */

/** @defgroup SAI_Block_MSB_LSB_transmission SAI Block MSB LSB transmission
  * @{
  */
#define SAI_FIRSTBIT_MSB                  ((uint32_t)0x00000000U)
#define SAI_FIRSTBIT_LSB                  ((uint32_t)SAI_xCR1_LSBFIRST)
/**
  * @}
  */

/** @defgroup SAI_Block_Clock_Strobing SAI Block Clock Strobing
  * @{
  */
#define SAI_CLOCKSTROBING_FALLINGEDGE     0
#define SAI_CLOCKSTROBING_RISINGEDGE      1
/**
  * @}
  */

/** @defgroup SAI_Block_Synchronization SAI Block Synchronization
  * @{
  */
#define SAI_ASYNCHRONOUS                  0 /*!< Asynchronous */
#define SAI_SYNCHRONOUS                   1 /*!< Synchronous with other block of same SAI */
#define SAI_SYNCHRONOUS_EXT_SAI1          2 /*!< Synchronous with other SAI, SAI1 */
#define SAI_SYNCHRONOUS_EXT_SAI2          3 /*!< Synchronous with other SAI, SAI2 */
/**
  * @}
  */

/** @defgroup SAI_Block_Output_Drive SAI Block Output Drive
  * @{
  */
#define SAI_OUTPUTDRIVE_DISABLE          ((uint32_t)0x00000000U)
#define SAI_OUTPUTDRIVE_ENABLE           ((uint32_t)SAI_xCR1_OUTDRIV)
/**
  * @}
  */

/** @defgroup SAI_Block_NoDivider SAI Block NoDivider
  * @{
  */
#define SAI_MASTERDIVIDER_ENABLE         ((uint32_t)0x00000000U)
#define SAI_MASTERDIVIDER_DISABLE        ((uint32_t)SAI_xCR1_NODIV)
/**
  * @}
  */
  

/** @defgroup SAI_Block_FS_Definition SAI Block FS Definition
  * @{
  */
#define SAI_FS_STARTFRAME                 ((uint32_t)0x00000000U)
#define SAI_FS_CHANNEL_IDENTIFICATION     ((uint32_t)SAI_xFRCR_FSDEF)
/**
  * @}
  */

/** @defgroup SAI_Block_FS_Polarity SAI Block FS Polarity
  * @{
  */
#define SAI_FS_ACTIVE_LOW                  ((uint32_t)0x00000000U)
#define SAI_FS_ACTIVE_HIGH                 ((uint32_t)SAI_xFRCR_FSPOL)
/**
  * @}
  */

/** @defgroup SAI_Block_FS_Offset SAI Block FS Offset
  * @{
  */
#define SAI_FS_FIRSTBIT                   ((uint32_t)0x00000000U)
#define SAI_FS_BEFOREFIRSTBIT             ((uint32_t)SAI_xFRCR_FSOFF)
/**
  * @}
  */
  

  /** @defgroup SAI_Block_Slot_Size SAI Block Slot Size
  * @{
  */
#define SAI_SLOTSIZE_DATASIZE             ((uint32_t)0x00000000U)
#define SAI_SLOTSIZE_16B                  ((uint32_t)SAI_xSLOTR_SLOTSZ_0)
#define SAI_SLOTSIZE_32B                  ((uint32_t)SAI_xSLOTR_SLOTSZ_1)
/**
  * @}
  */

/** @defgroup SAI_Block_Slot_Active SAI Block Slot Active
  * @{
  */
#define SAI_SLOT_NOTACTIVE           ((uint32_t)0x00000000U)
#define SAI_SLOTACTIVE_0             ((uint32_t)0x00000001U)
#define SAI_SLOTACTIVE_1             ((uint32_t)0x00000002U)
#define SAI_SLOTACTIVE_2             ((uint32_t)0x00000004U)
#define SAI_SLOTACTIVE_3             ((uint32_t)0x00000008U)
#define SAI_SLOTACTIVE_4             ((uint32_t)0x00000010U)
#define SAI_SLOTACTIVE_5             ((uint32_t)0x00000020U)
#define SAI_SLOTACTIVE_6             ((uint32_t)0x00000040U)
#define SAI_SLOTACTIVE_7             ((uint32_t)0x00000080U)
#define SAI_SLOTACTIVE_8             ((uint32_t)0x00000100U)
#define SAI_SLOTACTIVE_9             ((uint32_t)0x00000200U)
#define SAI_SLOTACTIVE_10            ((uint32_t)0x00000400U)
#define SAI_SLOTACTIVE_11            ((uint32_t)0x00000800U)
#define SAI_SLOTACTIVE_12            ((uint32_t)0x00001000U)
#define SAI_SLOTACTIVE_13            ((uint32_t)0x00002000U)
#define SAI_SLOTACTIVE_14            ((uint32_t)0x00004000U)
#define SAI_SLOTACTIVE_15            ((uint32_t)0x00008000U)
#define SAI_SLOTACTIVE_ALL           ((uint32_t)0x0000FFFFU)
/**
  * @}
  */

/** @defgroup SAI_Mono_Stereo_Mode SAI Mono Stereo Mode
  * @{
  */
#define SAI_STEREOMODE               ((uint32_t)0x00000000U)
#define SAI_MONOMODE                 ((uint32_t)SAI_xCR1_MONO)
/**
  * @}
  */

/** @defgroup SAI_TRIState_Management SAI TRIState Management
  * @{
  */
#define SAI_OUTPUT_NOTRELEASED        ((uint32_t)0x00000000U)
#define SAI_OUTPUT_RELEASED           ((uint32_t)SAI_xCR2_TRIS)
/**
  * @}
  */

/** @defgroup SAI_Block_Fifo_Threshold SAI Block Fifo Threshold
  * @{
  */
#define SAI_FIFOTHRESHOLD_EMPTY  ((uint32_t)0x00000000U)
#define SAI_FIFOTHRESHOLD_1QF    ((uint32_t)(SAI_xCR2_FTH_0))
#define SAI_FIFOTHRESHOLD_HF     ((uint32_t)(SAI_xCR2_FTH_1))
#define SAI_FIFOTHRESHOLD_3QF    ((uint32_t)(SAI_xCR2_FTH_1 | SAI_xCR2_FTH_0))
#define SAI_FIFOTHRESHOLD_FULL   ((uint32_t)(SAI_xCR2_FTH_2))
/**
  * @}
  */

/** @defgroup SAI_Block_Companding_Mode SAI Block Companding Mode
  * @{
  */
#define SAI_NOCOMPANDING                 ((uint32_t)0x00000000U)
#define SAI_ULAW_1CPL_COMPANDING         ((uint32_t)(SAI_xCR2_COMP_1))
#define SAI_ALAW_1CPL_COMPANDING         ((uint32_t)(SAI_xCR2_COMP_1 | SAI_xCR2_COMP_0))
#define SAI_ULAW_2CPL_COMPANDING         ((uint32_t)(SAI_xCR2_COMP_1 | SAI_xCR2_CPL))
#define SAI_ALAW_2CPL_COMPANDING         ((uint32_t)(SAI_xCR2_COMP_1 | SAI_xCR2_COMP_0 | SAI_xCR2_CPL))
/**
  * @}
  */

/** @defgroup SAI_Block_Mute_Value SAI Block Mute Value
  * @{
  */
#define SAI_ZERO_VALUE                   ((uint32_t)0x00000000U)
#define SAI_LAST_SENT_VALUE              ((uint32_t)SAI_xCR2_MUTEVAL)
/**
  * @}
  */

/** @defgroup SAI_Block_Interrupts_Definition SAI Block Interrupts Definition
  * @{
  */
#define SAI_IT_OVRUDR                     ((uint32_t)SAI_xIMR_OVRUDRIE)
#define SAI_IT_MUTEDET                    ((uint32_t)SAI_xIMR_MUTEDETIE)
#define SAI_IT_WCKCFG                     ((uint32_t)SAI_xIMR_WCKCFGIE)
#define SAI_IT_FREQ                       ((uint32_t)SAI_xIMR_FREQIE)
#define SAI_IT_CNRDY                      ((uint32_t)SAI_xIMR_CNRDYIE)
#define SAI_IT_AFSDET                     ((uint32_t)SAI_xIMR_AFSDETIE)
#define SAI_IT_LFSDET                     ((uint32_t)SAI_xIMR_LFSDETIE)
/**
  * @}
  */

/** @defgroup SAI_Block_Flags_Definition  SAI Block Flags Definition
  * @{
  */
#define SAI_FLAG_OVRUDR                   ((uint32_t)SAI_xSR_OVRUDR)
#define SAI_FLAG_MUTEDET                  ((uint32_t)SAI_xSR_MUTEDET)
#define SAI_FLAG_WCKCFG                   ((uint32_t)SAI_xSR_WCKCFG)
#define SAI_FLAG_FREQ                     ((uint32_t)SAI_xSR_FREQ)
#define SAI_FLAG_CNRDY                    ((uint32_t)SAI_xSR_CNRDY)
#define SAI_FLAG_AFSDET                   ((uint32_t)SAI_xSR_AFSDET)
#define SAI_FLAG_LFSDET                   ((uint32_t)SAI_xSR_LFSDET)
/**
  * @}
  */

/** @defgroup SAI_Block_Fifo_Status_Level   SAI Block Fifo Status Level
  * @{
  */
#define SAI_FIFOSTATUS_EMPTY              ((uint32_t)0x00000000U)
#define SAI_FIFOSTATUS_LESS1QUARTERFULL   ((uint32_t)0x00010000U)
#define SAI_FIFOSTATUS_1QUARTERFULL       ((uint32_t)0x00020000U)
#define SAI_FIFOSTATUS_HALFFULL           ((uint32_t)0x00030000U)
#define SAI_FIFOSTATUS_3QUARTERFULL       ((uint32_t)0x00040000U)
#define SAI_FIFOSTATUS_FULL               ((uint32_t)0x00050000U)
/**
  * @}
  */

/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/

/** @defgroup SAI_Exported_Macros SAI Exported Macros
 *  @brief macros to handle interrupts and specific configurations
 * @{
 */

/** @brief Reset SAI handle state.
  * @param  __HANDLE__: specifies the SAI Handle.
  * @retval None
  */
#define __HAL_SAI_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SAI_STATE_RESET)

/** @brief  Enable or disable the specified SAI interrupts.
  * @param  __HANDLE__: specifies the SAI Handle.
  * @param  __INTERRUPT__: specifies the interrupt source to enable or disable.
  *         This parameter can be one of the following values:
  *            @arg SAI_IT_OVRUDR: Overrun underrun interrupt enable
  *            @arg SAI_IT_MUTEDET: Mute detection interrupt enable
  *            @arg SAI_IT_WCKCFG: Wrong Clock Configuration interrupt enable
  *            @arg SAI_IT_FREQ: FIFO request interrupt enable
  *            @arg SAI_IT_CNRDY: Codec not ready interrupt enable
  *            @arg SAI_IT_AFSDET: Anticipated frame synchronization detection interrupt enable
  *            @arg SAI_IT_LFSDET: Late frame synchronization detection interrupt enable
  * @retval None
  */
#define __HAL_SAI_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->IMR |= (__INTERRUPT__))
#define __HAL_SAI_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->IMR &= (~(__INTERRUPT__)))

/** @brief  Check whether the specified SAI interrupt source is enabled or not.
  * @param  __HANDLE__: specifies the SAI Handle.
  * @param  __INTERRUPT__: specifies the SAI interrupt source to check.
  *         This parameter can be one of the following values:
  *            @arg SAI_IT_OVRUDR: Overrun underrun interrupt enable
  *            @arg SAI_IT_MUTEDET: Mute detection interrupt enable
  *            @arg SAI_IT_WCKCFG: Wrong Clock Configuration interrupt enable
  *            @arg SAI_IT_FREQ: FIFO request interrupt enable
  *            @arg SAI_IT_CNRDY: Codec not ready interrupt enable
  *            @arg SAI_IT_AFSDET: Anticipated frame synchronization detection interrupt enable
  *            @arg SAI_IT_LFSDET: Late frame synchronization detection interrupt enable
  * @retval The new state of __INTERRUPT__ (TRUE or FALSE).
  */
#define __HAL_SAI_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->IMR & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)

/** @brief  Check whether the specified SAI flag is set or not.
  * @param  __HANDLE__: specifies the SAI Handle.
  * @param  __FLAG__: specifies the flag to check.
  *         This parameter can be one of the following values:
  *            @arg SAI_FLAG_OVRUDR: Overrun underrun flag.
  *            @arg SAI_FLAG_MUTEDET: Mute detection flag.
  *            @arg SAI_FLAG_WCKCFG: Wrong Clock Configuration flag.
  *            @arg SAI_FLAG_FREQ: FIFO request flag.
  *            @arg SAI_FLAG_CNRDY: Codec not ready flag.
  *            @arg SAI_FLAG_AFSDET: Anticipated frame synchronization detection flag.
  *            @arg SAI_FLAG_LFSDET: Late frame synchronization detection flag.
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_SAI_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__))

/** @brief  Clear the specified SAI pending flag.
  * @param  __HANDLE__: specifies the SAI Handle.
  * @param  __FLAG__: specifies the flag to check.
  *          This parameter can be any combination of the following values:
  *            @arg SAI_FLAG_OVRUDR: Clear Overrun underrun
  *            @arg SAI_FLAG_MUTEDET: Clear Mute detection
  *            @arg SAI_FLAG_WCKCFG: Clear Wrong Clock Configuration
  *            @arg SAI_FLAG_FREQ: Clear FIFO request
  *            @arg SAI_FLAG_CNRDY: Clear Codec not ready
  *            @arg SAI_FLAG_AFSDET: Clear Anticipated frame synchronization detection
  *            @arg SAI_FLAG_LFSDET: Clear Late frame synchronization detection
  *
  * @retval None
  */
#define __HAL_SAI_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->CLRFR = (__FLAG__))

#define __HAL_SAI_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR1 |=  SAI_xCR1_SAIEN)
#define __HAL_SAI_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR1 &=  ~SAI_xCR1_SAIEN)

 /**
  * @}
  */

/* Exported functions --------------------------------------------------------*/

/** @addtogroup SAI_Exported_Functions
  * @{
  */

/* Initialization/de-initialization functions  ********************************/

/** @addtogroup SAI_Exported_Functions_Group1
  * @{
  */
HAL_StatusTypeDef HAL_SAI_InitProtocol(SAI_HandleTypeDef *hsai, uint32_t protocol, uint32_t datasize, uint32_t nbslot);
HAL_StatusTypeDef HAL_SAI_Init(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_DeInit (SAI_HandleTypeDef *hsai);
void HAL_SAI_MspInit(SAI_HandleTypeDef *hsai);
void HAL_SAI_MspDeInit(SAI_HandleTypeDef *hsai);

/**
  * @}
  */

/* I/O operation functions  ***************************************************/

/** @addtogroup SAI_Exported_Functions_Group2
  * @{
  */
/* Blocking mode: Polling */
HAL_StatusTypeDef HAL_SAI_Transmit(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_SAI_Receive(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size, uint32_t Timeout);

/* Non-Blocking mode: Interrupt */
HAL_StatusTypeDef HAL_SAI_Transmit_IT(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SAI_Receive_IT(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);

/* Non-Blocking mode: DMA */
HAL_StatusTypeDef HAL_SAI_Transmit_DMA(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SAI_Receive_DMA(SAI_HandleTypeDef *hsai, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_SAI_DMAPause(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_DMAResume(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_DMAStop(SAI_HandleTypeDef *hsai);

/* Abort function */
HAL_StatusTypeDef HAL_SAI_Abort(SAI_HandleTypeDef *hsai);

/* Mute management */
HAL_StatusTypeDef HAL_SAI_EnableTxMuteMode(SAI_HandleTypeDef *hsai, uint16_t val);
HAL_StatusTypeDef HAL_SAI_DisableTxMuteMode(SAI_HandleTypeDef *hsai);
HAL_StatusTypeDef HAL_SAI_EnableRxMuteMode(SAI_HandleTypeDef *hsai, SAIcallback callback, uint16_t counter);
HAL_StatusTypeDef HAL_SAI_DisableRxMuteMode(SAI_HandleTypeDef *hsai);

/* SAI IRQHandler and Callbacks used in non blocking modes (Interrupt and DMA) */
void HAL_SAI_IRQHandler(SAI_HandleTypeDef *hsai);
void HAL_SAI_TxHalfCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_TxCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_RxHalfCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_RxCpltCallback(SAI_HandleTypeDef *hsai);
void HAL_SAI_ErrorCallback(SAI_HandleTypeDef *hsai);
/**
  * @}
  */

/** @addtogroup SAI_Exported_Functions_Group3
  * @{
  */
/* Peripheral State functions  ************************************************/
HAL_SAI_StateTypeDef HAL_SAI_GetState(SAI_HandleTypeDef *hsai);
uint32_t HAL_SAI_GetError(SAI_HandleTypeDef *hsai);
/**
  * @}
  */

/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @addtogroup SAI_Private_Macros
  * @{
  */
#define IS_SAI_BLOCK_SYNCEXT(STATE) (((STATE) == SAI_SYNCEXT_DISABLE)          ||\
                                     ((STATE) == SAI_SYNCEXT_OUTBLOCKA_ENABLE) ||\
                                     ((STATE) == SAI_SYNCEXT_OUTBLOCKB_ENABLE))

#define IS_SAI_SUPPORTED_PROTOCOL(PROTOCOL)   (((PROTOCOL) == SAI_I2S_STANDARD)     ||\
                                               ((PROTOCOL) == SAI_I2S_MSBJUSTIFIED) ||\
                                               ((PROTOCOL) == SAI_I2S_LSBJUSTIFIED) ||\
                                               ((PROTOCOL) == SAI_PCM_LONG)         ||\
                                               ((PROTOCOL) == SAI_PCM_SHORT))

#define IS_SAI_PROTOCOL_DATASIZE(DATASIZE)   (((DATASIZE) == SAI_PROTOCOL_DATASIZE_16BIT)         ||\
                                              ((DATASIZE) == SAI_PROTOCOL_DATASIZE_16BITEXTENDED) ||\
                                              ((DATASIZE) == SAI_PROTOCOL_DATASIZE_24BIT)         ||\
                                              ((DATASIZE) == SAI_PROTOCOL_DATASIZE_32BIT))

#define IS_SAI_AUDIO_FREQUENCY(AUDIO) (((AUDIO) == SAI_AUDIO_FREQUENCY_192K) || ((AUDIO) == SAI_AUDIO_FREQUENCY_96K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_48K)  || ((AUDIO) == SAI_AUDIO_FREQUENCY_44K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_32K)  || ((AUDIO) == SAI_AUDIO_FREQUENCY_22K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_16K)  || ((AUDIO) == SAI_AUDIO_FREQUENCY_11K) || \
                                       ((AUDIO) == SAI_AUDIO_FREQUENCY_8K)   || ((AUDIO) == SAI_AUDIO_FREQUENCY_MCKDIV))

#define IS_SAI_BLOCK_MODE(MODE)  (((MODE) == SAI_MODEMASTER_TX) || \
                                  ((MODE) == SAI_MODEMASTER_RX) || \
                                  ((MODE) == SAI_MODESLAVE_TX)  || \
                                  ((MODE) == SAI_MODESLAVE_RX))

#define IS_SAI_BLOCK_PROTOCOL(PROTOCOL) (((PROTOCOL) == SAI_FREE_PROTOCOL)  || \
                                         ((PROTOCOL) == SAI_AC97_PROTOCOL)  || \
                                         ((PROTOCOL) == SAI_SPDIF_PROTOCOL))

#define IS_SAI_BLOCK_DATASIZE(DATASIZE) (((DATASIZE) == SAI_DATASIZE_8)  || \
                                         ((DATASIZE) == SAI_DATASIZE_10) || \
                                         ((DATASIZE) == SAI_DATASIZE_16) || \
                                         ((DATASIZE) == SAI_DATASIZE_20) || \
                                         ((DATASIZE) == SAI_DATASIZE_24) || \
                                         ((DATASIZE) == SAI_DATASIZE_32))

#define IS_SAI_BLOCK_FIRST_BIT(BIT) (((BIT) == SAI_FIRSTBIT_MSB) || \
                                     ((BIT) == SAI_FIRSTBIT_LSB))

#define IS_SAI_BLOCK_CLOCK_STROBING(CLOCK) (((CLOCK) == SAI_CLOCKSTROBING_FALLINGEDGE) || \
                                            ((CLOCK) == SAI_CLOCKSTROBING_RISINGEDGE))

#define IS_SAI_BLOCK_SYNCHRO(SYNCHRO) (((SYNCHRO) == SAI_ASYNCHRONOUS)         || \
                                       ((SYNCHRO) == SAI_SYNCHRONOUS)          || \
                                       ((SYNCHRO) == SAI_SYNCHRONOUS_EXT_SAI1) || \
                                       ((SYNCHRO) == SAI_SYNCHRONOUS_EXT_SAI2))

#define IS_SAI_BLOCK_OUTPUT_DRIVE(DRIVE) (((DRIVE) == SAI_OUTPUTDRIVE_DISABLE) || \
                                          ((DRIVE) == SAI_OUTPUTDRIVE_ENABLE))

#define IS_SAI_BLOCK_NODIVIDER(NODIVIDER) (((NODIVIDER) == SAI_MASTERDIVIDER_ENABLE) || \
                                           ((NODIVIDER) == SAI_MASTERDIVIDER_DISABLE))

#define IS_SAI_BLOCK_MUTE_COUNTER(COUNTER) ((COUNTER) <= 63)

#define IS_SAI_BLOCK_MUTE_VALUE(VALUE)    (((VALUE) == SAI_ZERO_VALUE)     || \
                                           ((VALUE) == SAI_LAST_SENT_VALUE))

#define IS_SAI_BLOCK_COMPANDING_MODE(MODE)    (((MODE) == SAI_NOCOMPANDING)         || \
                                               ((MODE) == SAI_ULAW_1CPL_COMPANDING) || \
                                               ((MODE) == SAI_ALAW_1CPL_COMPANDING) || \
                                               ((MODE) == SAI_ULAW_2CPL_COMPANDING) || \
                                               ((MODE) == SAI_ALAW_2CPL_COMPANDING))

#define IS_SAI_BLOCK_FIFO_THRESHOLD(THRESHOLD) (((THRESHOLD) == SAI_FIFOTHRESHOLD_EMPTY)   || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_1QF)     || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_HF)      || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_3QF)     || \
                                                ((THRESHOLD) == SAI_FIFOTHRESHOLD_FULL))

#define IS_SAI_BLOCK_TRISTATE_MANAGEMENT(STATE) (((STATE) == SAI_OUTPUT_NOTRELEASED) ||\
                                                 ((STATE) == SAI_OUTPUT_RELEASED))

#define IS_SAI_MONO_STEREO_MODE(MODE) (((MODE) == SAI_MONOMODE) ||\
                                       ((MODE) == SAI_STEREOMODE))

#define IS_SAI_SLOT_ACTIVE(ACTIVE)  ((ACTIVE) <= SAI_SLOTACTIVE_ALL)

#define IS_SAI_BLOCK_SLOT_NUMBER(NUMBER) ((1 <= (NUMBER)) && ((NUMBER) <= 16))

#define IS_SAI_BLOCK_SLOT_SIZE(SIZE) (((SIZE) == SAI_SLOTSIZE_DATASIZE) || \
                                      ((SIZE) == SAI_SLOTSIZE_16B)      || \
                                      ((SIZE) == SAI_SLOTSIZE_32B))

#define IS_SAI_BLOCK_FIRSTBIT_OFFSET(OFFSET) ((OFFSET) <= 24)

#define IS_SAI_BLOCK_FS_OFFSET(OFFSET) (((OFFSET) == SAI_FS_FIRSTBIT) || \
                                        ((OFFSET) == SAI_FS_BEFOREFIRSTBIT))

#define IS_SAI_BLOCK_FS_POLARITY(POLARITY) (((POLARITY) == SAI_FS_ACTIVE_LOW) || \
                                            ((POLARITY) == SAI_FS_ACTIVE_HIGH))

#define IS_SAI_BLOCK_FS_DEFINITION(DEFINITION) (((DEFINITION) == SAI_FS_STARTFRAME) || \
                                                ((DEFINITION) == SAI_FS_CHANNEL_IDENTIFICATION))

#define IS_SAI_BLOCK_MASTER_DIVIDER(DIVIDER) ((DIVIDER) <= 15)

#define IS_SAI_BLOCK_FRAME_LENGTH(LENGTH) ((8 <= (LENGTH)) && ((LENGTH) <= 256))

#define IS_SAI_BLOCK_ACTIVE_FRAME(LENGTH) ((1 <= (LENGTH)) && ((LENGTH) <= 128))

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup SAI_Private_Functions SAI Private Functions
  * @{
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32F7xx_HAL_SAI_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
                                                                                                                                                                                                                                                                                                                                             /**
  ******************************************************************************
  * @file    stm32f7xx_hal_rtc_ex.h
  * @author  MCD Application Team
  * @version V1.1.1
  * @date    01-July-2016
  * @brief   Header file of RTC HAL Extension module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F7xx_HAL_RTC_EX_H
#define __STM32F7xx_HAL_RTC_EX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal_def.h"

/** @addtogroup STM32F7xx_HAL_Driver
  * @{
  */

/** @addtogroup RTCEx
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/ 
/** @defgroup RTCEx_Exported_Types RTCEx Exported Types
  * @{
  */

/** 
  * @brief  RTC Tamper structure definition  
  */
typedef struct 
{
  uint32_t Tamper;                      /*!< Specifies the Tamper Pin.
                                             This parameter can be a value of @ref  RTCEx_Tamper_Pins_Definitions */
  
  uint32_t Interrupt;                   /*!< Specifies the Tamper Interrupt.
                                             This parameter can be a value of @ref  RTCEx_Tamper_Interrupt_Definitions */                                  
                                             
  uint32_t Trigger;                     /*!< Specifies the Tamper Trigger.
                                             This parameter can be a value of @ref  RTCEx_Tamper_Trigger_Definitions */
                                             
  uint32_t NoErase;                     /*!< Specifies the Tamper no erase mode.
                                             This parameter can be a value of @ref  RTCEx_Tamper_EraseBackUp_Definitions */

  uint32_t MaskFlag;                     /*!< Specifies the Tamper Flag masking.
                                             This parameter can be a value of @ref RTCEx_Tamper_MaskFlag_Definitions   */

  uint32_t Filter;                      /*!< Specifies the RTC Filter Tamper.
                                             This parameter can be a value of @ref RTCEx_Tamper_Filter_Definitions */
  
  uint32_t SamplingFrequency;           /*!< Specifies the sampling frequency.
                                             This parameter can be a value of @ref RTCEx_Tamper_Sampling_Frequencies_Definitions */
                                      
  uint32_t PrechargeDuration;           /*!< Specifies the Precharge Duration .
                                             This parameter can be a value of @ref RTCEx_Tamper_Pin_Precharge_Duration_Definitions */ 
 
  uint32_t TamperPullUp;                /*!< Specifies the Tamper PullUp .
                                             This parameter can be a value of @ref RTCEx_Tamper_Pull_UP_Definitions */           
 
  uint32_t TimeStampOnTamperDetection;  /*!< Specifies the TimeStampOnTamperDetection.
                                             This parameter can be a value of @ref RTCEx_Tamper_TimeStampOnTamperDetection_Definitions */                      
}RTC_TamperTypeDef;
/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup RTCEx_Exported_Constants RTCEx Exported Constants
  * @{
  */

/** @defgroup RTCEx_Output_selection_Definitions RTCEx Output selection Definitions 
  * @{
  */ 
#define RTC_OUTPUT_DISABLE             ((uint32_t)0x00000000U)
#define RTC_OUTPUT_ALARMA              ((uint32_t)0x00200000U)
#define RTC_OUTPUT_ALARMB              ((uint32_t)0x00400000U)
#define RTC_OUTPUT_WAKEUP              ((uint32_t)0x00600000U)
/**
  * @}
  */ 
  
/** @defgroup RTCEx_Backup_Registers_Definitions RTC Backup Registers Definitions
  * @{
  */
#define RTC_BKP_DR0                       ((uint32_t)0x00000000U)
#define RTC_BKP_DR1                       ((uint32_t)0x00000001U)
#define RTC_BKP_DR2                       ((uint32_t)0x00000002U)
#define RTC_BKP_DR3                       ((uint32_t)0x00000003U)
#define RTC_BKP_DR4                       ((uint32_t)0x00000004U)
#define RTC_BKP_DR5                       ((uint32_t)0x00000005U)
#define RTC_BKP_DR6                       ((uint32_t)0x00000006U)
#define RTC_BKP_DR7                       ((uint32_t)0x00000007U)
#define RTC_BKP_DR8                       ((uint32_t)0x00000008U)
#define RTC_BKP_DR9                       ((uint32_t)0x00000009U)
#define RTC_BKP_DR10                      ((uint32_t)0x0000000AU)
#define RTC_BKP_DR11                      ((uint32_t)0x0000000BU)
#define RTC_BKP_DR12                      ((uint32_t)0x0000000CU)
#define RTC_BKP_DR13                      ((uint32_t)0x0000000DU)
#define RTC_BKP_DR14                      ((uint32_t)0x0000000EU)
#define RTC_BKP_DR15                      ((uint32_t)0x0000000FU)
#define RTC_BKP_DR16                      ((uint32_t)0x00000010U)
#define RTC_BKP_DR17                      ((uint32_t)0x00000011U)
#define RTC_BKP_DR18                      ((uint32_t)0x00000012U)
#define RTC_BKP_DR19                      ((uint32_t)0x00000013U)
#define RTC_BKP_DR20                      ((uint32_t)0x00000014U)
#define RTC_BKP_DR21                      ((uint32_t)0x00000015U)
#define RTC_BKP_DR22                      ((uint32_t)0x00000016U)
#define RTC_BKP_DR23                      ((uint32_t)0x00000017U)
#define RTC_BKP_DR24                      ((uint32_t)0x00000018U)
#define RTC_BKP_DR25                      ((uint32_t)0x00000019U)
#define RTC_BKP_DR26                      ((uint32_t)0x0000001AU)
#define RTC_BKP_DR27                      ((uint32_t)0x0000001BU)
#define RTC_BKP_DR28                      ((uint32_t)0x0000001CU)
#define RTC_BKP_DR29                      ((uint32_t)0x0000001DU)
#define RTC_BKP_DR30                      ((uint32_t)0x0000001EU)
#define RTC_BKP_DR31                      ((uint32_t)0x0000001FU)
/**
  * @}
  */ 

/** @defgroup RTCEx_Time_Stamp_Edges_definitions RTCEx Time Stamp Edges definitions 
  * @{
  */ 
#define RTC_TIMESTAMPEDGE_RISING          ((uint32_t)0x00000000U)
#define RTC_TIMESTAMPEDGE_FALLING         ((uint32_t)0x00000008U)
/**
  * @}
  */
  
/** @defgroup RTCEx_Tamper_Pins_Definitions RTCEx Tamper Pins Definitions 
  * @{
  */ 
#define RTC_TAMPER_1                    RTC_TAMPCR_TAMP1E
#define RTC_TAMPER_2                    RTC_TAMPCR_TAMP2E
#define RTC_TAMPER_3                    RTC_TAMPCR_TAMP3E
/**
  * @}
  */

/** @defgroup RTCEx_Tamper_Interrupt_Definitions RTCEx Tamper Interrupt Definitions
  * @{
  */
#define RTC_TAMPER1_INTERRUPT                RTC_TAMPCR_TAMP1IE
#define RTC_TAMPER2_INTERRUPT                RTC_TAMPCR_TAMP2IE
#define RTC_TAMPER3_INTERRUPT                RTC_TAMPCR_TAMP3IE
#define RTC_ALL_TAMPER_INTERRUPT             RTC_TAMPCR_TAMPIE
/**
  * @}
  */

/** @defgroup RTCEx_TimeStamp_Pin_Selection RTCEx TimeStamp Pin Selection
  * @{
  */ 
#define RTC_TIMESTAMPPIN_DEFAULT            ((uint32_t)0x00000000U)
#define RTC_TIMESTAMPPIN_POS1               ((uint32_t)0x00000002U)
#define RTC_TIMESTAMPPIN_POS2               ((uint32_t)0x00000004U)
/**
  * @}
  */ 

/** @defgroup RTCEx_Tamper_Trigger_Definitions RTCEx Tamper Trigger Definitions 
  * @{
  */ 
#define RTC_TAMPERTRIGGER_RISINGEDGE       ((uint32_t)0x00000000U)
#define RTC_TAMPERTRIGGER_FALLINGEDGE      ((uint32_t)0x00000002U)
#define RTC_TAMPERTRIGGER_LOWLEVEL         RTC_TAMPERTRIGGER_RISINGEDGE
#define RTC_TAMPERTRIGGER_HIGHLEVEL        RTC_TAMPERTRIGGER_FALLINGEDGE 
/**
  * @}
  */  

  /** @defgroup RTCEx_Tamper_EraseBackUp_Definitions RTCEx Tamper EraseBackUp Definitions
* @{
*/
#define RTC_TAMPER_ERASE_BACKUP_ENABLE               ((uint32_t)0x00000000U)
#define RTC_TAMPER_ERASE_BACKUP_DISABLE              ((uint32_t)0x00020000U)
/**
  * @}
  */

/** @defgroup RTCEx_Tamper_MaskFlag_Definitions RTCEx Tamper MaskFlag Definitions
  * @{
  */
#define RTC_TAMPERMASK_FLAG_DISABLE                ((uint32_t)0x00000000U)
#define RTC_TAMPERMASK_FLAG_ENABLE                 ((uint32_t)0x00040000U)
/**
  * @}
  */
  
/** @defgroup RTCEx_Tamper_Filter_Definitions RTCEx Tamper Filter Definitions 
  * @{
  */ 
#define RTC_TAMPERFILTER_DISABLE   ((uint32_t)0x00000000U)  /*!< Tamper filter is disabled */

#define RTC_TAMPERFILTER_2SAMPLE   ((uint32_t)0x00000800U)  /*!< Tamper is activated after 2 
                                                                consecutive samples at the active level */
#define RTC_TAMPERFILTER_4SAMPLE   ((uint32_t)0x00001000U)  /*!< Tamper is activated after 4 
                                                                consecutive samples at the active level */
#define RTC_TAMPERFILTER_8SAMPLE   ((uint32_t)0x00001800U)  /*!< Tamper is activated after 8 
                                                                consecutive samples at the active leve. */
/**
  * @}
  */

/** @defgroup RTCEx_Tamper_Sampling_Frequencies_Definitions RTCEx Tamper Sampling Frequencies Definitions 
  * @{
  */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV32768  ((uint32_t)0x00000000U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 32768 */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV16384  ((uint32_t)0x00000100U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 16384 */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV8192   ((uint32_t)0x00000200U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 8192  */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV4096   ((uint32_t)0x00000300U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 4096  */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV2048   ((uint32_t)0x00000400U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 2048  */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV1024   ((uint32_t)0x00000500U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 1024  */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV512    ((uint32_t)0x00000600U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 512   */
#define RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV256    ((uint32_t)0x00000700U)  /*!< Each of the tamper inputs are sampled
                                                                             with a frequency =  RTCCLK / 256   */
/**
  * @}
  */

/** @defgroup RTCEx_Tamper_Pin_Precharge_Duration_Definitions RTCEx Tamper Pin Precharge Duration Definitions 
  * @{
  */ 
#define RTC_TAMPERPRECHARGEDURATION_1RTCCLK ((uint32_t)0x00000000U)  /*!< Tamper pins are pre-charged before 
                                                                         sampling during 1 RTCCLK cycle */
#define RTC_TAMPERPRECHARGEDURATION_2RTCCLK ((uint32_t)0x00002000U)  /*!< Tamper pins are pre-charged before 
                                                                         sampling during 2 RTCCLK cycles */
#define RTC_TAMPERPRECHARGEDURATION_4RTCCLK ((uint32_t)0x00004000U)  /*!< Tamper pins are pre-charged before 
                                                                         sampling during 4 RTCCLK cycles */
#define RTC_TAMPERPRECHARGEDURATION_8RTCCLK ((uint32_t)0x00006000U)  /*!< Tamper pins are pre-charged before 
                                                                         sampling during 8 RTCCLK cycles */
/**
  * @}
  */
  
/** @defgroup RTCEx_Tamper_TimeStampOnTamperDetection_Definitions RTCEx Tamper TimeStampOnTamperDetection Definitions
  * @{
  */ 
#define RTC_TIMESTAMPONTAMPERDETECTION_ENABLE  ((uint32_t)RTC_TAMPCR_TAMPTS)  /*!< TimeStamp on Tamper Detection event saved        */
#define RTC_TIMESTAMPONTAMPERDETECTION_DISABLE ((uint32_t)0x00000000U)        /*!< TimeStamp on Tamper Detection event is not saved */                                                                      
/**
  * @}
  */
  
/** @defgroup  RTCEx_Tamper_Pull_UP_Definitions RTCEx Tamper Pull UP Definitions
  * @{
  */ 
#define RTC_TAMPER_PULLUP_ENABLE  ((uint32_t)0x00000000U)            /*!< TimeStamp on Tamper Detection event saved        */
#define RTC_TAMPER_PULLUP_DISABLE ((uint32_t)RTC_TAMPCR_TAMPPUDIS)   /*!< TimeStamp on Tamper Detection event is not saved */                                                                  
/**
  * @}
  */

/** @defgroup RTCEx_Wakeup_Timer_Definitions RTCEx Wakeup Timer Definitions 
  * @{
  */ 
#define RTC_WAKEUPCLOCK_RTCCLK_DIV16        ((uint32_t)0x00000000U)
#define RTC_WAKEUPCLOCK_RTCCLK_DIV8         ((uint32_t)0x00000001U)
#define RTC_WAKEUPCLOCK_RTCCLK_DIV4         ((uint32_t)0x00000002U)
#define RTC_WAKEUPCLOCK_RTCCLK_DIV2         ((uint32_t)0x00000003U)
#define RTC_WAKEUPCLOCK_CK_SPRE_16BITS      ((uint32_t)0x00000004U)
#define RTC_WAKEUPCLOCK_CK_SPRE_17BITS      ((uint32_t)0x00000006U)
/**
  * @}
  */ 

/** @defgroup RTCEx_Smooth_calib_period_Definitions RTCEx Smooth calib period Definitions 
  * @{
  */ 
#define RTC_SMOOTHCALIB_PERIOD_32SEC   ((uint32_t)0x00000000U)  /*!< If RTCCLK = 32768 Hz, Smooth calibration
                                                                    period is 32s,  else 2exp20 RTCCLK seconds */
#define RTC_SMOOTHCALIB_PERIOD_16SEC   ((uint32_t)0x00002000U)  /*!< If RTCCLK = 32768 Hz, Smooth calibration 
                                                                    period is 16s, else 2exp19 RTCCLK seconds */
#define RTC_SMOOTHCALIB_PERIOD_8SEC    ((uint32_t)0x00004000U)  /*!< If RTCCLK = 32768 Hz, Smooth calibration 
                                                                    period is 8s, else 2exp18 RTCCLK seconds */                                        
/**
  * @}
  */ 

/** @defgroup RTCEx_Smooth_calib_Plus_pulses_Definitions RTCEx Smooth calib Plus pulses Definitions 
  * @{
  */ 
#define RTC_SMOOTHCALIB_PLUSPULSES_SET    ((uint32_t)0x00008000U)  /*!< The number of RTCCLK pulses added  
                                                                       during a X -second window = Y - CALM[8:0] 
                                                                       with Y = 512, 256, 128 when X = 32, 16, 8 */
#define RTC_SMOOTHCALIB_PLUSPULSES_RESET  ((uint32_t)0x00000000U)  /*!< The number of RTCCLK pulses subbstited
                                                                       during a 32-second window = CALM[8:0] */
/**
  * @}
  */

/** @defgroup RTCEx_Add_1_Second_Parameter_Definitions RTCEx Add 1 Second Parameter Definitions
  * @{
  */ 
#define RTC_SHIFTADD1S_RESET      ((uint32_t)0x00000000U)
#define RTC_SHIFTADD1S_SET        ((uint32_t)0x80000000U)
/**
  * @}
  */

 /** @defgroup RTCEx_Calib_Output_selection_Definitions RTCEx Calib Output selection Definitions
  * @{
  */ 
#define RTC_CALIBOUTPUT_512HZ            ((uint32_t)0x00000000U) 
#define RTC_CALIBOUTPUT_1HZ              ((uint32_t)0x00080000U)
/**
  * @}
  */ 
  
/**
  * @}
  */ 
  
/* Exported macros -----------------------------------------------------------*/
/** @defgroup RTCEx_Exported_Macros RTCEx Exported Macros
  * @{
  */

/**
  * @brief  Enable the RTC WakeUp Timer peripheral.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_ENABLE(__HANDLE__)                     ((__HANDLE__)->Instance->CR |= (RTC_CR_WUTE))

/**
  * @brief  Disable the RTC WakeUp Timer peripheral.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_DISABLE(__HANDLE__)                    ((__HANDLE__)->Instance->CR &= ~(RTC_CR_WUTE))

/**
  * @brief  Enable the RTC WakeUpTimer interrupt.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC WakeUpTimer interrupt sources to be enabled or disabled.
  *         This parameter can be:
  *            @arg RTC_IT_WUT: WakeUpTimer interrupt
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_ENABLE_IT(__HANDLE__, __INTERRUPT__)    ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))

/**
  * @brief  Disable the RTC WakeUpTimer interrupt.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC WakeUpTimer interrupt sources to be enabled or disabled.
  *         This parameter can be:
  *            @arg RTC_IT_WUT: WakeUpTimer interrupt
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_DISABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))

/**
  * @brief  Check whether the specified RTC WakeUpTimer interrupt has occurred or not.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC WakeUpTimer interrupt sources to check.
  *         This parameter can be:
  *            @arg RTC_IT_WUT:  WakeUpTimer interrupt
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_GET_IT(__HANDLE__, __INTERRUPT__)       (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 4)) != RESET) ? SET : RESET)

/**
  * @brief  Check whether the specified RTC Wake Up timer interrupt has been enabled or not.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC Wake Up timer interrupt sources to check.
  *         This parameter can be:
  *            @arg RTC_IT_WUT:  WakeUpTimer interrupt
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)   (((((__HANDLE__)->Instance->CR) & (__INTERRUPT__)) != RESET) ? SET : RESET)

/**
  * @brief  Get the selected RTC WakeUpTimer's flag status.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC WakeUpTimer Flag is pending or not.
  *          This parameter can be:
  *             @arg RTC_FLAG_WUTF
  *             @arg RTC_FLAG_WUTWF
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_GET_FLAG(__HANDLE__, __FLAG__)   (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)

/**
  * @brief  Clear the RTC Wake Up timer's pending flags.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC WakeUpTimer Flag to clear.
  *         This parameter can be:
  *            @arg RTC_FLAG_WUTF
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))    

/**
  * @brief  Enable the RTC Tamper1 input detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TAMPER1_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->TAMPCR |= (RTC_TAMPCR_TAMP1E))

/**
  * @brief  Disable the RTC Tamper1 input detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TAMPER1_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->TAMPCR &= ~(RTC_TAMPCR_TAMP1E))

/**
  * @brief  Enable the RTC Tamper2 input detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TAMPER2_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->TAMPCR |= (RTC_TAMPCR_TAMP2E))

/**
  * @brief  Disable the RTC Tamper2 input detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TAMPER2_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->TAMPCR &= ~(RTC_TAMPCR_TAMP2E))

/**
  * @brief  Enable the RTC Tamper3 input detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TAMPER3_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->TAMPCR |= (RTC_TAMPCR_TAMP3E))

/**
  * @brief  Disable the RTC Tamper3 input detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TAMPER3_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->TAMPCR &= ~(RTC_TAMPCR_TAMP3E))

/**
  * @brief  Check whether the specified RTC Tamper interrupt has occurred or not.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC Tamper interrupt to check.
  *         This parameter can be:
  *            @arg  RTC_IT_TAMP: All tampers interrupts
  *            @arg  RTC_IT_TAMP1: Tamper1 interrupt
  *            @arg  RTC_IT_TAMP2: Tamper2 interrupt
  *            @arg  RTC_IT_TAMP3: Tamper3 interrupt
  * @retval None
  */
#define __HAL_RTC_TAMPER_GET_IT(__HANDLE__, __INTERRUPT__)           (((__INTERRUPT__) == RTC_IT_TAMP1) ? (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 3)) != RESET) ? SET : RESET) : \
                                                                      ((__INTERRUPT__) == RTC_IT_TAMP2) ? (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 5)) != RESET) ? SET : RESET) : \
                                                                                                          (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 7)) != RESET) ? SET : RESET))

/**
  * @brief  Check whether the specified RTC Tamper interrupt has been enabled or not.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC Tamper interrupt source to check.
  *         This parameter can be:
  *            @arg  RTC_IT_TAMP: All tampers interrupts
  *            @arg  RTC_IT_TAMP1: Tamper1 interrupt
  *            @arg  RTC_IT_TAMP2: Tamper2 interrupt
  *            @arg  RTC_IT_TAMP3: Tamper3 interrupt
  * @retval None
  */
#define __HAL_RTC_TAMPER_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)    (((((__HANDLE__)->Instance->TAMPCR) & (__INTERRUPT__)) != RESET) ? SET : RESET)

/**
  * @brief  Get the selected RTC Tamper's flag status.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC Tamper Flag is pending or not.
  *          This parameter can be:
  *             @arg RTC_FLAG_TAMP1F: Tamper1 flag
  *             @arg RTC_FLAG_TAMP2F: Tamper2 flag
  *             @arg RTC_FLAG_TAMP3F: Tamper3 flag
  * @retval None
  */
#define __HAL_RTC_TAMPER_GET_FLAG(__HANDLE__, __FLAG__)        (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)

/**
  * @brief  Clear the RTC Tamper's pending flags.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC Tamper Flag sources to clear.
  *          This parameter can be:
  *             @arg RTC_FLAG_TAMP1F: Tamper1 flag
  *             @arg RTC_FLAG_TAMP2F: Tamper2 flag
  *             @arg RTC_FLAG_TAMP3F: Tamper3 flag
  * @retval None
  */
#define __HAL_RTC_TAMPER_CLEAR_FLAG(__HANDLE__, __FLAG__)      ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))

/**
  * @brief  Enable the RTC TimeStamp peripheral.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_ENABLE(__HANDLE__)                       ((__HANDLE__)->Instance->CR |= (RTC_CR_TSE))

/**
  * @brief  Disable the RTC TimeStamp peripheral.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_DISABLE(__HANDLE__)                      ((__HANDLE__)->Instance->CR &= ~(RTC_CR_TSE))

/**
  * @brief  Enable the RTC TimeStamp interrupt.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC TimeStamp interrupt sources to be enabled or disabled.
  *         This parameter can be:
  *            @arg RTC_IT_TS: TimeStamp interrupt
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_ENABLE_IT(__HANDLE__, __INTERRUPT__)     ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))

/**
  * @brief  Disable the RTC TimeStamp interrupt.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC TimeStamp interrupt sources to be enabled or disabled. 
  *         This parameter can be:
  *            @arg RTC_IT_TS: TimeStamp interrupt
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_DISABLE_IT(__HANDLE__, __INTERRUPT__)    ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))

/**
  * @brief  Check whether the specified RTC TimeStamp interrupt has occurred or not.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC TimeStamp interrupt sources to check.
  *         This parameter can be:
  *            @arg RTC_IT_TS: TimeStamp interrupt
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_GET_IT(__HANDLE__, __INTERRUPT__)        (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 4)) != RESET) ? SET : RESET)

/**
  * @brief  Check whether the specified RTC Time Stamp interrupt has been enabled or not.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __INTERRUPT__: specifies the RTC Time Stamp interrupt source to check.
  *         This parameter can be:
  *            @arg RTC_IT_TS: TimeStamp interrupt
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)     (((((__HANDLE__)->Instance->CR) & (__INTERRUPT__)) != RESET) ? SET : RESET)

/**
  * @brief  Get the selected RTC TimeStamp's flag status.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC TimeStamp Flag is pending or not.
  *         This parameter can be:
  *            @arg RTC_FLAG_TSF
  *            @arg RTC_FLAG_TSOVF
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_GET_FLAG(__HANDLE__, __FLAG__)     (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)

/**
  * @brief  Clear the RTC Time Stamp's pending flags.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC Alarm Flag sources to clear.
  *          This parameter can be:
  *             @arg RTC_FLAG_TSF
  *             @arg RTC_FLAG_TSOVF
  * @retval None
  */
#define __HAL_RTC_TIMESTAMP_CLEAR_FLAG(__HANDLE__, __FLAG__)   ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))

/**
  * @brief  Enable the RTC internal TimeStamp peripheral.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_INTERNAL_TIMESTAMP_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR |= (RTC_CR_ITSE))

/**
  * @brief  Disable the RTC internal TimeStamp peripheral.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_INTERNAL_TIMESTAMP_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR &= ~(RTC_CR_ITSE))

/**
  * @brief  Get the selected RTC Internal Time Stamp's flag status.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC Internal Time Stamp Flag is pending or not.
  *         This parameter can be:
  *            @arg RTC_FLAG_ITSF
  * @retval None
  */
#define __HAL_RTC_INTERNAL_TIMESTAMP_GET_FLAG(__HANDLE__, __FLAG__)    (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)

/**
  * @brief  Clear the RTC Internal Time Stamp's pending flags.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC Internal Time Stamp Flag source to clear.
  *          This parameter can be:
  *             @arg RTC_FLAG_ITSF
  * @retval None
  */
#define __HAL_RTC_INTERNAL_TIMESTAMP_CLEAR_FLAG(__HANDLE__, __FLAG__)  ((__HANDLE__)->Instance->ISR) = (~(((__FLAG__) | RTC_ISR_INIT)& 0x0003FFFF)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))

/**
  * @brief  Enable the RTC calibration output.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_CALIBRATION_OUTPUT_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR |= (RTC_CR_COE))

/**
  * @brief  Disable the calibration output.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_CALIBRATION_OUTPUT_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR &= ~(RTC_CR_COE))

/**
  * @brief  Enable the clock reference detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_CLOCKREF_DETECTION_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR |= (RTC_CR_REFCKON))

/**
  * @brief  Disable the clock reference detection.
  * @param  __HANDLE__: specifies the RTC handle.
  * @retval None
  */
#define __HAL_RTC_CLOCKREF_DETECTION_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR &= ~(RTC_CR_REFCKON))

/**
  * @brief  Get the selected RTC shift operation's flag status.
  * @param  __HANDLE__: specifies the RTC handle.
  * @param  __FLAG__: specifies the RTC shift operation Flag is pending or not.
  *          This parameter can be:
  *             @arg RTC_FLAG_SHPF
  * @retval None
  */
#define __HAL_RTC_SHIFT_GET_FLAG(__HANDLE__, __FLAG__)         (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)

/**
  * @brief  Enable interrupt on the RTC WakeUp Timer associated Exti line.
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_IT()       (EXTI->IMR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief  Disable interrupt on the RTC WakeUp Timer associated Exti line.
  * @retval None
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_IT()      (EXTI->IMR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))

/**
  * @brief  Enable event on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_EVENT()    (EXTI->EMR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief  Disable event on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_EVENT()   (EXTI->EMR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))

/**
  * @brief  Enable falling edge trigger on the RTC WakeUp Timer associated Exti line. 
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_FALLING_EDGE()   (EXTI->FTSR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief  Disable falling edge trigger on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_FALLING_EDGE()  (EXTI->FTSR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))

/**
  * @brief  Enable rising edge trigger on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_RISING_EDGE()    (EXTI->RTSR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief  Disable rising edge trigger on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_RISING_EDGE()   (EXTI->RTSR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))

/**
  * @brief  Enable rising & falling edge trigger on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_RISING_FALLING_EDGE() __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_RISING_EDGE();__HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_FALLING_EDGE();

/**
  * @brief  Disable rising & falling edge trigger on the RTC WakeUp Timer associated Exti line.
  * This parameter can be:
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_RISING_FALLING_EDGE() __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_RISING_EDGE();__HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_FALLING_EDGE();

/**
  * @brief Check whether the RTC WakeUp Timer associated Exti line interrupt flag is set or not.
  * @retval Line Status.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_GET_FLAG()              (EXTI->PR & RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief Clear the RTC WakeUp Timer associated Exti line flag.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_CLEAR_FLAG()            (EXTI->PR = RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief Generate a Software interrupt on the RTC WakeUp Timer associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_WAKEUPTIMER_EXTI_GENERATE_SWIT()         (EXTI->SWIER |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)

/**
  * @brief  Enable interrupt on the RTC Tamper and Timestamp associated Exti line.
  * @retval None
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_IT()        (EXTI->IMR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @brief  Disable interrupt on the RTC Tamper and Timestamp associated Exti line.
  * @retval None
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_IT()       (EXTI->IMR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))

/**
  * @brief  Enable event on the RTC Tamper and Timestamp associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_EVENT()    (EXTI->EMR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @brief  Disable event on the RTC Tamper and Timestamp associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_EVENT()   (EXTI->EMR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))

/**
  * @brief  Enable falling edge trigger on the RTC Tamper and Timestamp associated Exti line. 
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_FALLING_EDGE()   (EXTI->FTSR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @brief  Disable falling edge trigger on the RTC Tamper and Timestamp associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_FALLING_EDGE()  (EXTI->FTSR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))

/**
  * @brief  Enable rising edge trigger on the RTC Tamper and Timestamp associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_RISING_EDGE()    (EXTI->RTSR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @brief  Disable rising edge trigger on the RTC Tamper and Timestamp associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_RISING_EDGE()   (EXTI->RTSR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))

/**
  * @brief  Enable rising & falling edge trigger on the RTC Tamper and Timestamp associated Exti line.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_RISING_FALLING_EDGE() __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_RISING_EDGE();__HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_FALLING_EDGE();

/**
  * @brief  Disable rising & falling edge trigger on the RTC Tamper and Timestamp associated Exti line.
  * This parameter can be:
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_RISING_FALLING_EDGE() __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_RISING_EDGE();__HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_FALLING_EDGE();

/**
  * @brief Check whether the RTC Tamper and Timestamp associated Exti line interrupt flag is set or not.
  * @retval Line Status.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_GET_FLAG()         (EXTI->PR & RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @brief Clear the RTC Tamper and Timestamp associated Exti line flag.
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_CLEAR_FLAG()       (EXTI->PR = RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @brief Generate a Software interrupt on the RTC Tamper and Timestamp associated Exti line
  * @retval None.
  */
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_GENERATE_SWIT()    (EXTI->SWIER |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @defgroup RTCEx_Exported_Functions RTCEx Exported Functions
  * @{
  */

/** @addtogroup RTCEx_Exported_Functions_Group1
  * @{
  */

/* RTC TimeStamp and Tamper functions *****************************************/
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_SetTimeStamp_IT(RTC_HandleTypeDef *hrtc, uint32_t TimeStampEdge, uint32_t RTC_TimeStampPin);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetInternalTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DeactivateInternalTimeStamp(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_GetTimeStamp(RTC_HandleTypeDef *hrtc, RTC_TimeTypeDef *sTimeStamp, RTC_DateTypeDef *sTimeStampDate, uint32_t Format);

HAL_StatusTypeDef HAL_RTCEx_SetTamper(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper);
HAL_StatusTypeDef HAL_RTCEx_SetTamper_IT(RTC_HandleTypeDef *hrtc, RTC_TamperTypeDef* sTamper);
HAL_StatusTypeDef HAL_RTCEx_DeactivateTamper(RTC_HandleTypeDef *hrtc, uint32_t Tamper);
void              HAL_RTCEx_TamperTimeStampIRQHandler(RTC_HandleTypeDef *hrtc);

void              HAL_RTCEx_Tamper1EventCallback(RTC_HandleTypeDef *hrtc);
void              HAL_RTCEx_Tamper2EventCallback(RTC_HandleTypeDef *hrtc);
void              HAL_RTCEx_Tamper3EventCallback(RTC_HandleTypeDef *hrtc);
void              HAL_RTCEx_TimeStampEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForTimeStampEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper1Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper2Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
HAL_StatusTypeDef HAL_RTCEx_PollForTamper3Event(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
/**
  * @}
  */

/** @addtogroup RTCEx_Exported_Functions_Group2
  * @{
  */
/* RTC Wake-up functions ******************************************************/
HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);
HAL_StatusTypeDef HAL_RTCEx_SetWakeUpTimer_IT(RTC_HandleTypeDef *hrtc, uint32_t WakeUpCounter, uint32_t WakeUpClock);
uint32_t          HAL_RTCEx_DeactivateWakeUpTimer(RTC_HandleTypeDef *hrtc);
uint32_t          HAL_RTCEx_GetWakeUpTimer(RTC_HandleTypeDef *hrtc);
void              HAL_RTCEx_WakeUpTimerIRQHandler(RTC_HandleTypeDef *hrtc);
void              HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_PollForWakeUpTimerEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
/**
  * @}
  */

/** @addtogroup RTCEx_Exported_Functions_Group3
  * @{
  */
/* Extension Control functions ************************************************/
void              HAL_RTCEx_BKUPWrite(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister, uint32_t Data);
uint32_t          HAL_RTCEx_BKUPRead(RTC_HandleTypeDef *hrtc, uint32_t BackupRegister);

HAL_StatusTypeDef HAL_RTCEx_SetSmoothCalib(RTC_HandleTypeDef *hrtc, uint32_t SmoothCalibPeriod, uint32_t SmoothCalibPlusPulses, uint32_t SmouthCalibMinusPulsesValue);
HAL_StatusTypeDef HAL_RTCEx_SetSynchroShift(RTC_HandleTypeDef *hrtc, uint32_t ShiftAdd1S, uint32_t ShiftSubFS);
HAL_StatusTypeDef HAL_RTCEx_SetCalibrationOutPut(RTC_HandleTypeDef *hrtc, uint32_t CalibOutput);
HAL_StatusTypeDef HAL_RTCEx_DeactivateCalibrationOutPut(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_SetRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DeactivateRefClock(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_EnableBypassShadow(RTC_HandleTypeDef *hrtc);
HAL_StatusTypeDef HAL_RTCEx_DisableBypassShadow(RTC_HandleTypeDef *hrtc);
/**
  * @}
  */

/** @addtogroup RTCEx_Exported_Functions_Group4
  * @{
  */
/* Extension RTC features functions *******************************************/
void              HAL_RTCEx_AlarmBEventCallback(RTC_HandleTypeDef *hrtc); 
HAL_StatusTypeDef HAL_RTCEx_PollForAlarmBEvent(RTC_HandleTypeDef *hrtc, uint32_t Timeout);
/**
  * @}
  */ 

/**
  * @}
  */ 
/* Private types -------------------------------------------------------------*/ 
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup RTCEx_Private_Constants RTCEx Private Constants
  * @{
  */
#define RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT  ((uint32_t)EXTI_IMR_IM21)  /*!< External interrupt line 21 Connected to the RTC Tamper and Time Stamp events */                                               
#define RTC_EXTI_LINE_WAKEUPTIMER_EVENT       ((uint32_t)EXTI_IMR_IM22)  /*!< External interrupt line 22 Connected to the RTC Wake-up event */  
/**
  * @}
  */

/* Private constants ---------------------------------------------------------*/
/** @defgroup RTCEx_Private_Constants RTCEx Private Constants
  * @{
  */
/* Masks Definition */
#define RTC_TAMPCR_TAMPXE     ((uint32_t) (RTC_TAMPCR_TAMP3E | RTC_TAMPCR_TAMP2E | RTC_TAMPCR_TAMP1E))
#define RTC_TAMPCR_TAMPXIE    ((uint32_t) (RTC_TAMPER1_INTERRUPT | RTC_TAMPER2_INTERRUPT | RTC_TAMPER3_INTERRUPT | RTC_ALL_TAMPER_INTERRUPT))
/**
  * @}
  */
  
/* Private macros ------------------------------------------------------------*/   
/** @defgroup RTCEx_Private_Macros RTCEx Private Macros
  * @{
  */

/** @defgroup RTCEx_IS_RTC_Definitions Private macros to check input parameters
  * @{
  */
#define IS_RTC_OUTPUT(__OUTPUT__)      (((__OUTPUT__) == RTC_OUTPUT_DISABLE) || \
                                        ((__OUTPUT__) == RTC_OUTPUT_ALARMA)  || \
                                        ((__OUTPUT__) == RTC_OUTPUT_ALARMB)  || \
                                        ((__OUTPUT__) == RTC_OUTPUT_WAKEUP))
#define IS_RTC_BKP(__BKP__)               ((__BKP__) < (uint32_t) RTC_BKP_NUMBER)
#define IS_TIMESTAMP_EDGE(__EDGE__) (((__EDGE__) == RTC_TIMESTAMPEDGE_RISING) || \
                                     ((__EDGE__) == RTC_TIMESTAMPEDGE_FALLING))
#define IS_RTC_TAMPER(__TAMPER__)   ((((__TAMPER__) & ((uint32_t)(0xFFFFFFFFU ^ RTC_TAMPCR_TAMPXE))) == 0x00U) && ((__TAMPER__) != (uint32_t)RESET))

#define IS_RTC_TAMPER_INTERRUPT(__INTERRUPT__)  ((((__INTERRUPT__) & (uint32_t)(0xFFFFFFFFU ^ RTC_TAMPCR_TAMPXIE)) == 0x00U) && ((__INTERRUPT__) != (uint32_t)RESET))

#define IS_RTC_TIMESTAMP_PIN(__PIN__) (((__PIN__) == RTC_TIMESTAMPPIN_DEFAULT) || \
                                       ((__PIN__) == RTC_TIMESTAMPPIN_POS1)  || \
                                       ((__PIN__) == RTC_TIMESTAMPPIN_POS2))
#define IS_RTC_TAMPER_TRIGGER(__TRIGGER__) (((__TRIGGER__) == RTC_TAMPERTRIGGER_RISINGEDGE) || \
                                        ((__TRIGGER__) == RTC_TAMPERTRIGGER_FALLINGEDGE) || \
                                        ((__TRIGGER__) == RTC_TAMPERTRIGGER_LOWLEVEL) || \
                                        ((__TRIGGER__) == RTC_TAMPERTRIGGER_HIGHLEVEL))
#define IS_RTC_TAMPER_ERASE_MODE(__MODE__)             (((__MODE__) == RTC_TAMPER_ERASE_BACKUP_ENABLE) || \
                                                        ((__MODE__) == RTC_TAMPER_ERASE_BACKUP_DISABLE))
#define IS_RTC_TAMPER_MASKFLAG_STATE(__STATE__)     (((__STATE__) == RTC_TAMPERMASK_FLAG_ENABLE) || \
                                                     ((__STATE__) == RTC_TAMPERMASK_FLAG_DISABLE))
#define IS_RTC_TAMPER_FILTER(__FILTER__)  (((__FILTER__) == RTC_TAMPERFILTER_DISABLE) || \
                                       ((__FILTER__) == RTC_TAMPERFILTER_2SAMPLE) || \
                                       ((__FILTER__) == RTC_TAMPERFILTER_4SAMPLE) || \
                                       ((__FILTER__) == RTC_TAMPERFILTER_8SAMPLE))
#define IS_RTC_TAMPER_SAMPLING_FREQ(__FREQ__) (((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV32768)|| \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV16384)|| \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV8192) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV4096) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV2048) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV1024) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV512)  || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV256))
#define IS_RTC_TAMPER_PRECHARGE_DURATION(__DURATION__) (((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_1RTCCLK) || \
                                                    ((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_2RTCCLK) || \
                                                    ((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_4RTCCLK) || \
                                                    ((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_8RTCCLK))
#define IS_RTC_TAMPER_TIMESTAMPONTAMPER_DETECTION(__DETECTION__) (((__DETECTION__) == RTC_TIMESTAMPONTAMPERDETECTION_ENABLE) || \
                                                              ((__DETECTION__) == RTC_TIMESTAMPONTAMPERDETECTION_DISABLE))
#define IS_RTC_TAMPER_PULLUP_STATE(__STATE__) (((__STATE__) == RTC_TAMPER_PULLUP_ENABLE) || \
                                       ((__STATE__) == RTC_TAMPER_PULLUP_DISABLE))
#define IS_RTC_WAKEUP_CLOCK(__CLOCK__) (((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV16)       || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV8)    || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV4)    || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV2)    || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_CK_SPRE_16BITS) || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_CK_SPRE_17BITS))

#define IS_RTC_WAKEUP_COUNTER(__COUNTER__)  ((__COUNTER__) <= 0xFFFF)
#define IS_RTC_SMOOTH_CALIB_PERIOD(__PERIOD__) (((__PERIOD__) == RTC_SMOOTHCALIB_PERIOD_32SEC) || \
                                                ((__PERIOD__) == RTC_SMOOTHCALIB_PERIOD_16SEC) || \
                                                ((__PERIOD__) == RTC_SMOOTHCALIB_PERIOD_8SEC))
#define IS_RTC_SMOOTH_CALIB_PLUS(__PLUS__) (((__PLUS__) == RTC_SMOOTHCALIB_PLUSPULSES_SET) || \
                                            ((__PLUS__) == RTC_SMOOTHCALIB_PLUSPULSES_RESET))
#define  IS_RTC_SMOOTH_CALIB_MINUS(__VALUE__) ((__VALUE__) <= 0x000001FF)
#define IS_RTC_SHIFT_ADD1S(__SEL__) (((__SEL__) == RTC_SHIFTADD1S_RESET) || \
                                     ((__SEL__) == RTC_SHIFTADD1S_SET))
#define IS_RTC_SHIFT_SUBFS(__FS__) ((__FS__) <= 0x00007FFF)
#define IS_RTC_CALIB_OUTPUT(__OUTPUT__)  (((__OUTPUT__) == RTC_CALIBOUTPUT_512HZ) || \
                                          ((__OUTPUT__) == RTC_CALIBOUTPUT_1HZ))
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32F7xx_HAL_RTC_EX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       /**
  ******************************************************************************
  * @file    stm32f7xx_hal_rtc.h
  * @author  MCD Application Team
  * @version V1.1.1
  * @date    01-July-2016
  * @brief   Header file of RTC HAL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F7xx_HAL_RTC_H
#define __STM32F7xx_HAL_RTC_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal_def.h"

/** @addtogroup STM32F7xx_HAL_Driver
  * @{
  */

/** @addtogroup RTC
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/
/** @defgroup RTC_Exported_Types RTC Exported Types
  * @{
  */

/** 
  * @brief  HAL State structures definition  
  */ 
typedef enum
{
  HAL_RTC_STATE_RESET             = 0x00U,  /*!< RTC not yet initialized or disabled */
  HAL_RTC_STATE_READY             = 0x01U,  /*!< RTC initialized and ready for use   */
  HAL_RTC_STATE_BUSY              = 0x02U,  /*!< RTC process is ongoing              */     
  HAL_RTC_STATE_TIMEOUT           = 0x03U,  /*!< RTC timeout state                   */  
  HAL_RTC_STATE_ERROR             = 0x04U   /*!< RTC error state                     */      
                                                                        
}HAL_RTCStateTypeDef;

/** 
  * @brief  RTC Configuration Structure definition  
  */
typedef struct
{
  uint32_t HourFormat;      /*!< Specifies the RTC Hour Format.
                                 This parameter can be a value of @ref RTC_Hour_Formats */         

  uint32_t AsynchPrediv;    /*!< Specifies the RTC Asynchronous Predivider value.
                                 This parameter must be a number between Min_Data = 0x00 and Max_Data = 0x7F */        
                               
  uint32_t SynchPrediv;     /*!< Specifies the RTC Synchronous Predivider value.
                                 This parameter must be a number between Min_Data = 0x00 and Max_Data = 0x7FFF */   
  
  uint32_t OutPut;          /*!< Specifies which signal will be routed to the RTC output.   
                                 This parameter can be a value of @ref RTCEx_Output_selection_Definitions */      
  
  uint32_t OutPutPolarity;  /*!< Specifies the polarity of the output signal.  
                                 This parameter can be a value of @ref RTC_Output_Polarity_Definitions */ 
  
  uint32_t OutPutType;      /*!< Specifies the RTC Output Pin mode.   
                                 This parameter can be a value of @ref RTC_Output_Type_ALARM_OUT */             
}RTC_InitTypeDef;

/** 
  * @brief  RTC Time structure definition  
  */
typedef struct
{
  uint8_t Hours;            /*!< Specifies the RTC Time Hour.
                                 This parameter must be a number between Min_Data = 0 and Max_Data = 12 if the RTC_HourFormat_12 is selected.
                                 This parameter must be a number between Min_Data = 0 and Max_Data = 23 if the RTC_HourFormat_24 is selected  */

  uint8_t Minutes;          /*!< Specifies the RTC Time Minutes.
                                 This parameter must be a number between Min_Data = 0 and Max_Data = 59 */
  
  uint8_t Seconds;          /*!< Specifies the RTC Time Seconds.
                                 This parameter must be a number between Min_Data = 0 and Max_Data = 59 */
  
  uint32_t SubSeconds;      /*!< Specifies the RTC_SSR RTC Sub Second register content.
                                 This parameter corresponds to a time unit range between [0-1] Second
                                 with [1 Sec / SecondFraction +1] granularity */
  
  uint32_t SecondFraction;  /*!< Specifies the range or granularity of Sub Second register content
                                 corresponding to Synchronous pre-scaler factor value (PREDIV_S)
                                 This parameter corresponds to a time unit range between [0-1] Second
                                 with [1 Sec / SecondFraction +1] granularity.
                                 This field will be used only by HAL_RTC_GetTime function */

  uint8_t TimeFormat;       /*!< Specifies the RTC AM/PM Time.
                                 This parameter can be a value of @ref RTC_AM_PM_Definitions */ 
  
  uint32_t DayLightSaving;  /*!< Specifies RTC_DayLightSaveOperation: the value of hour adjustment.
                                 This parameter can be a value of @ref RTC_DayLightSaving_Definitions */
  
  uint32_t StoreOperation;  /*!< Specifies RTC_StoreOperation value to be written in the BCK bit 
                                 in CR register to store the operation.
                                 This parameter can be a value of @ref RTC_StoreOperation_Definitions */
}RTC_TimeTypeDef; 
  
/** 
  * @brief  RTC Date structure definition  
  */
typedef struct
{
  uint8_t WeekDay;  /*!< Specifies the RTC Date WeekDay.
                         This parameter can be a value of @ref RTC_WeekDay_Definitions */
  
  uint8_t Month;    /*!< Specifies the RTC Date Month (in BCD format).
                         This parameter can be a value of @ref RTC_Month_Date_Definitions */

  uint8_t Date;     /*!< Specifies the RTC Date.
                         This parameter must be a number between Min_Data = 1 and Max_Data = 31 */
  
  uint8_t Year;     /*!< Specifies the RTC Date Year.
                         This parameter must be a number between Min_Data = 0 and Max_Data = 99 */
                        
}RTC_DateTypeDef;

/** 
  * @brief  RTC Alarm structure definition  
  */
typedef struct
{
  RTC_TimeTypeDef AlarmTime;     /*!< Specifies the RTC Alarm Time members */
    
  uint32_t AlarmMask;            /*!< Specifies the RTC Alarm Masks.
                                      This parameter can be a value of @ref RTC_AlarmMask_Definitions */
 