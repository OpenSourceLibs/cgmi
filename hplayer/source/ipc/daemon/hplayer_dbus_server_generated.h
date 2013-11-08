/*
 * Generated by gdbus-codegen 2.32.4. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef ____HPLAYER_DBUS_SERVER_GENERATED_H__
#define ____HPLAYER_DBUS_SERVER_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.Cisco.Sail */

#define TYPE_ORG_CISCO_SAIL (org_cisco_sail_get_type ())
#define ORG_CISCO_SAIL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_CISCO_SAIL, OrgCiscoSail))
#define IS_ORG_CISCO_SAIL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_CISCO_SAIL))
#define ORG_CISCO_SAIL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_ORG_CISCO_SAIL, OrgCiscoSailIface))

struct _OrgCiscoSail;
typedef struct _OrgCiscoSail OrgCiscoSail;
typedef struct _OrgCiscoSailIface OrgCiscoSailIface;

struct _OrgCiscoSailIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_sail_is_media_recorder_available) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_sail_media_player_audio_mute) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_enable);

  gboolean (*handle_sail_media_player_close) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_close_source) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_audio_stream_info) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    gint arg_audioIndex);

  gboolean (*handle_sail_media_player_get_number_of_audio_streams) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_play_speed) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_selected_audio_stream) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_sink) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_source) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_supported_speeds) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_video_properties) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_get_volume) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_sail_media_player_is_audio_muted) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_sail_media_player_is_enabled) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_open) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_playback_info) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId);

  gboolean (*handle_sail_media_player_seek) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    gint64 arg_offset,
    gint arg_whence);

  gboolean (*handle_sail_media_player_select_audio_stream) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    gint arg_AudioIndex);

  gboolean (*handle_sail_media_player_set_enabled) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    gboolean arg_enabled);

  gboolean (*handle_sail_media_player_set_play_speed) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    gdouble arg_speed);

  gboolean (*handle_sail_media_player_set_sink) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    const gchar *arg_sink);

  gboolean (*handle_sail_media_player_set_source) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    const gchar *arg_source);

  gboolean (*handle_sail_media_player_set_volume) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_left,
    gint arg_right);

  gboolean (*handle_sail_media_player_video_full_scale) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    GVariant *arg_sourceRectangle);

  gboolean (*handle_sail_media_player_video_scale) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_playerId,
    GVariant *arg_sourceRectangle,
    GVariant *arg_destinationRectangle);

  gboolean (*handle_sail_media_recorder_delete_asset_record) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_asset);

  gboolean (*handle_sail_media_recorder_get_asset_info) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_recordIndex);

  gboolean (*handle_sail_media_recorder_get_asset_record_info) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_asset);

  gboolean (*handle_sail_media_recorder_get_number_of_assets) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_sail_media_recorder_start_asset_record) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_asset,
    const gchar *arg_source,
    gint arg_time_len_ms);

  gboolean (*handle_sail_media_recorder_start_timeshift) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_mediaPlayerId,
    guint64 arg_bufferSizeInMs);

  gboolean (*handle_sail_media_recorder_stop_asset_record) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_asset);

  gboolean (*handle_sail_media_recorder_stop_timeshift) (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint arg_mediaPlayerId);

  gboolean  (*get_verbose) (OrgCiscoSail *object);

  void (*sail_media_player_notify) (
    OrgCiscoSail *object,
    gint arg_playerId,
    const gchar *arg_sourceURI,
    gint arg_MediaEvent,
    gint arg_data);

};

GType org_cisco_sail_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *org_cisco_sail_interface_info (void);
guint org_cisco_sail_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void org_cisco_sail_complete_sail_media_player_get_video_properties (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    guint xRes,
    guint yRes,
    gint AspectRatio,
    gint VideoCodec,
    gint status);

void org_cisco_sail_complete_sail_media_player_open (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_close (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_set_source (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_source (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *source,
    gint status);

void org_cisco_sail_complete_sail_media_player_close_source (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_set_sink (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_sink (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *sink,
    gint status);

void org_cisco_sail_complete_sail_media_player_set_play_speed (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_play_speed (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gdouble speed,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_supported_speeds (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    GVariant *speeds,
    gint status);

void org_cisco_sail_complete_sail_media_player_seek (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_playback_info (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    guint64 ActualPlayPosition,
    guint64 SizeInMS,
    guint64 SizeInByte,
    gboolean IsActiveRecording,
    gint status);

void org_cisco_sail_complete_sail_media_player_set_enabled (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_is_enabled (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gboolean enabled,
    gint status);

void org_cisco_sail_complete_sail_media_player_video_scale (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_video_full_scale (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_number_of_audio_streams (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint Count,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_audio_stream_info (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    const gchar *AudioLanguage,
    gint AudioType,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_selected_audio_stream (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint AudioIndex,
    gint status);

void org_cisco_sail_complete_sail_media_player_select_audio_stream (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_audio_mute (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_get_volume (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint left,
    gint right,
    gint status);

void org_cisco_sail_complete_sail_media_player_set_volume (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_player_is_audio_muted (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gboolean IsAudioMuted,
    gint status);

void org_cisco_sail_complete_sail_is_media_recorder_available (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gboolean available,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_start_asset_record (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_stop_asset_record (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_delete_asset_record (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_get_asset_record_info (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    guint64 SizeInMS,
    guint64 SizeInByte,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_start_timeshift (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_stop_timeshift (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_get_number_of_assets (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    gint Count,
    gint status);

void org_cisco_sail_complete_sail_media_recorder_get_asset_info (
    OrgCiscoSail *object,
    GDBusMethodInvocation *invocation,
    guint seconds,
    guint64 size,
    const gchar *path,
    gint status);



/* D-Bus signal emissions functions: */
void org_cisco_sail_emit_sail_media_player_notify (
    OrgCiscoSail *object,
    gint arg_playerId,
    const gchar *arg_sourceURI,
    gint arg_MediaEvent,
    gint arg_data);



/* D-Bus method calls: */
void org_cisco_sail_call_sail_media_player_get_video_properties (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_video_properties_finish (
    OrgCiscoSail *proxy,
    guint *out_xRes,
    guint *out_yRes,
    gint *out_AspectRatio,
    gint *out_VideoCodec,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_video_properties_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    guint *out_xRes,
    guint *out_yRes,
    gint *out_AspectRatio,
    gint *out_VideoCodec,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_open (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_open_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_open_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_close (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_close_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_close_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_set_source (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    const gchar *arg_source,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_set_source_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_set_source_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    const gchar *arg_source,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_source (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_source_finish (
    OrgCiscoSail *proxy,
    gchar **out_source,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_source_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gchar **out_source,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_close_source (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_close_source_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_close_source_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_set_sink (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    const gchar *arg_sink,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_set_sink_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_set_sink_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    const gchar *arg_sink,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_sink (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_sink_finish (
    OrgCiscoSail *proxy,
    gchar **out_sink,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_sink_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gchar **out_sink,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_set_play_speed (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gdouble arg_speed,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_set_play_speed_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_set_play_speed_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gdouble arg_speed,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_play_speed (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_play_speed_finish (
    OrgCiscoSail *proxy,
    gdouble *out_speed,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_play_speed_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gdouble *out_speed,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_supported_speeds (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_supported_speeds_finish (
    OrgCiscoSail *proxy,
    GVariant **out_speeds,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_supported_speeds_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GVariant **out_speeds,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_seek (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint64 arg_offset,
    gint arg_whence,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_seek_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_seek_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint64 arg_offset,
    gint arg_whence,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_playback_info (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_playback_info_finish (
    OrgCiscoSail *proxy,
    guint64 *out_ActualPlayPosition,
    guint64 *out_SizeInMS,
    guint64 *out_SizeInByte,
    gboolean *out_IsActiveRecording,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_playback_info_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    guint64 *out_ActualPlayPosition,
    guint64 *out_SizeInMS,
    guint64 *out_SizeInByte,
    gboolean *out_IsActiveRecording,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_set_enabled (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gboolean arg_enabled,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_set_enabled_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_set_enabled_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gboolean arg_enabled,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_is_enabled (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_is_enabled_finish (
    OrgCiscoSail *proxy,
    gboolean *out_enabled,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_is_enabled_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gboolean *out_enabled,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_video_scale (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GVariant *arg_sourceRectangle,
    GVariant *arg_destinationRectangle,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_video_scale_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_video_scale_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GVariant *arg_sourceRectangle,
    GVariant *arg_destinationRectangle,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_video_full_scale (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GVariant *arg_sourceRectangle,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_video_full_scale_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_video_full_scale_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GVariant *arg_sourceRectangle,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_number_of_audio_streams (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_number_of_audio_streams_finish (
    OrgCiscoSail *proxy,
    gint *out_Count,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_number_of_audio_streams_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint *out_Count,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_audio_stream_info (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint arg_audioIndex,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_audio_stream_info_finish (
    OrgCiscoSail *proxy,
    gchar **out_AudioLanguage,
    gint *out_AudioType,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_audio_stream_info_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint arg_audioIndex,
    gchar **out_AudioLanguage,
    gint *out_AudioType,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_selected_audio_stream (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_selected_audio_stream_finish (
    OrgCiscoSail *proxy,
    gint *out_AudioIndex,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_selected_audio_stream_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint *out_AudioIndex,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_select_audio_stream (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint arg_AudioIndex,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_select_audio_stream_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_select_audio_stream_sync (
    OrgCiscoSail *proxy,
    gint arg_playerId,
    gint arg_AudioIndex,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_audio_mute (
    OrgCiscoSail *proxy,
    gboolean arg_enable,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_audio_mute_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_audio_mute_sync (
    OrgCiscoSail *proxy,
    gboolean arg_enable,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_get_volume (
    OrgCiscoSail *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_get_volume_finish (
    OrgCiscoSail *proxy,
    gint *out_left,
    gint *out_right,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_get_volume_sync (
    OrgCiscoSail *proxy,
    gint *out_left,
    gint *out_right,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_set_volume (
    OrgCiscoSail *proxy,
    gint arg_left,
    gint arg_right,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_set_volume_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_set_volume_sync (
    OrgCiscoSail *proxy,
    gint arg_left,
    gint arg_right,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_player_is_audio_muted (
    OrgCiscoSail *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_player_is_audio_muted_finish (
    OrgCiscoSail *proxy,
    gboolean *out_IsAudioMuted,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_player_is_audio_muted_sync (
    OrgCiscoSail *proxy,
    gboolean *out_IsAudioMuted,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_is_media_recorder_available (
    OrgCiscoSail *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_is_media_recorder_available_finish (
    OrgCiscoSail *proxy,
    gboolean *out_available,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_is_media_recorder_available_sync (
    OrgCiscoSail *proxy,
    gboolean *out_available,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_start_asset_record (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    const gchar *arg_source,
    gint arg_time_len_ms,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_start_asset_record_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_start_asset_record_sync (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    const gchar *arg_source,
    gint arg_time_len_ms,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_stop_asset_record (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_stop_asset_record_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_stop_asset_record_sync (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_delete_asset_record (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_delete_asset_record_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_delete_asset_record_sync (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_get_asset_record_info (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_get_asset_record_info_finish (
    OrgCiscoSail *proxy,
    guint64 *out_SizeInMS,
    guint64 *out_SizeInByte,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_get_asset_record_info_sync (
    OrgCiscoSail *proxy,
    const gchar *arg_asset,
    guint64 *out_SizeInMS,
    guint64 *out_SizeInByte,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_start_timeshift (
    OrgCiscoSail *proxy,
    gint arg_mediaPlayerId,
    guint64 arg_bufferSizeInMs,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_start_timeshift_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_start_timeshift_sync (
    OrgCiscoSail *proxy,
    gint arg_mediaPlayerId,
    guint64 arg_bufferSizeInMs,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_stop_timeshift (
    OrgCiscoSail *proxy,
    gint arg_mediaPlayerId,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_stop_timeshift_finish (
    OrgCiscoSail *proxy,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_stop_timeshift_sync (
    OrgCiscoSail *proxy,
    gint arg_mediaPlayerId,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_get_number_of_assets (
    OrgCiscoSail *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_get_number_of_assets_finish (
    OrgCiscoSail *proxy,
    gint *out_Count,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_get_number_of_assets_sync (
    OrgCiscoSail *proxy,
    gint *out_Count,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);

void org_cisco_sail_call_sail_media_recorder_get_asset_info (
    OrgCiscoSail *proxy,
    gint arg_recordIndex,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_cisco_sail_call_sail_media_recorder_get_asset_info_finish (
    OrgCiscoSail *proxy,
    guint *out_seconds,
    guint64 *out_size,
    gchar **out_path,
    gint *out_status,
    GAsyncResult *res,
    GError **error);

gboolean org_cisco_sail_call_sail_media_recorder_get_asset_info_sync (
    OrgCiscoSail *proxy,
    gint arg_recordIndex,
    guint *out_seconds,
    guint64 *out_size,
    gchar **out_path,
    gint *out_status,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gboolean org_cisco_sail_get_verbose (OrgCiscoSail *object);
void org_cisco_sail_set_verbose (OrgCiscoSail *object, gboolean value);


/* ---- */

#define TYPE_ORG_CISCO_SAIL_PROXY (org_cisco_sail_proxy_get_type ())
#define ORG_CISCO_SAIL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_CISCO_SAIL_PROXY, OrgCiscoSailProxy))
#define ORG_CISCO_SAIL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_CISCO_SAIL_PROXY, OrgCiscoSailProxyClass))
#define ORG_CISCO_SAIL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_CISCO_SAIL_PROXY, OrgCiscoSailProxyClass))
#define IS_ORG_CISCO_SAIL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_CISCO_SAIL_PROXY))
#define IS_ORG_CISCO_SAIL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_CISCO_SAIL_PROXY))

typedef struct _OrgCiscoSailProxy OrgCiscoSailProxy;
typedef struct _OrgCiscoSailProxyClass OrgCiscoSailProxyClass;
typedef struct _OrgCiscoSailProxyPrivate OrgCiscoSailProxyPrivate;

struct _OrgCiscoSailProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  OrgCiscoSailProxyPrivate *priv;
};

struct _OrgCiscoSailProxyClass
{
  GDBusProxyClass parent_class;
};

GType org_cisco_sail_proxy_get_type (void) G_GNUC_CONST;

void org_cisco_sail_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgCiscoSail *org_cisco_sail_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
OrgCiscoSail *org_cisco_sail_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void org_cisco_sail_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgCiscoSail *org_cisco_sail_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
OrgCiscoSail *org_cisco_sail_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_ORG_CISCO_SAIL_SKELETON (org_cisco_sail_skeleton_get_type ())
#define ORG_CISCO_SAIL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_CISCO_SAIL_SKELETON, OrgCiscoSailSkeleton))
#define ORG_CISCO_SAIL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_CISCO_SAIL_SKELETON, OrgCiscoSailSkeletonClass))
#define ORG_CISCO_SAIL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_CISCO_SAIL_SKELETON, OrgCiscoSailSkeletonClass))
#define IS_ORG_CISCO_SAIL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_CISCO_SAIL_SKELETON))
#define IS_ORG_CISCO_SAIL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_CISCO_SAIL_SKELETON))

typedef struct _OrgCiscoSailSkeleton OrgCiscoSailSkeleton;
typedef struct _OrgCiscoSailSkeletonClass OrgCiscoSailSkeletonClass;
typedef struct _OrgCiscoSailSkeletonPrivate OrgCiscoSailSkeletonPrivate;

struct _OrgCiscoSailSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  OrgCiscoSailSkeletonPrivate *priv;
};

struct _OrgCiscoSailSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType org_cisco_sail_skeleton_get_type (void) G_GNUC_CONST;

OrgCiscoSail *org_cisco_sail_skeleton_new (void);


G_END_DECLS

#endif /* ____HPLAYER_DBUS_SERVER_GENERATED_H__ */
